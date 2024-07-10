#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to determine if a year is a leap year
int isLeapYear(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    return 1; // Leap year
  else
    return 0; // Not a leap year
}

// Function to find the day of the week for a given date using Zeller's
// Congruence
int findStartingDay(int year, int month) {
  if (month < 3) {
    month += 12;
    year--;
  }

  int K = year % 100; // Year of the century
  int J = year / 100; // Zero-based century

  // Zeller's Congruence formula
  int h = (1 + (int)floor(13 * (double)(month + 1) / 5) + K +
           (int)floor((double)K / 4) + (int)floor((double)J / 4) - 2 * J) %
          7;

  // Adjust h to match our days array (0 = Sunday, 1 = Monday, ..., 6 =
  // Saturday)
  if (h < 0)
    h += 7; // Ensure h is positive

  return h;
}

int main(void) {
  int input_year, day_in_month;

  printf("Enter your desired year: ");
  scanf("%d", &input_year);

  const char *months[] = {"January",   "February", "March",    "April",
                          "May",       "June",     "July",     "August",
                          "September", "October",  "November", "December"};

  const char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

  for (int month = 0; month < 12; month++) {
    switch (month) {
    case 3:
    case 5:
    case 8:
    case 10:
      day_in_month = 30;
      break;
    case 1: // February
      if (isLeapYear(input_year))
        day_in_month = 29;
      else
        day_in_month = 28;
      break;
    default:
      day_in_month = 31;
      break;
    }

    // Find the starting day of the month
    int start_day = findStartingDay(
        input_year,
        month + 1); // month + 1 because Zeller's formula expects March = 3,
                    // April = 4, ..., January = 13, February = 14

    printf("\n\n-------- %s %d --------\n", months[month], input_year);

    // Print the headers for days of the week
    for (int day = 0; day < 7; day++) {
      printf("%s\t", days[day]);
    }
    printf("\n");

    // Print leading spaces until the first day of the month
    for (int i = 0; i < start_day; i++) {
      printf("\t");
    }

    // Print the days of the month
    for (int day = 1; day <= day_in_month; day++) {
      printf("%d\t", day);

      // Move to the next line after every 7 days (a week)
      if ((day + start_day) % 7 == 0)
        printf("\n");
    }
    printf("\n");
  }

  return 0;
}
