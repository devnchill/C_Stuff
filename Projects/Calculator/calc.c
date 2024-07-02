#include <math.h>
#include <stdio.h>

int main() {
  float num1, num2;
  char operator;
  printf(
" ____  _  _     ____  _    _____   ____  ____  _    ____  _     _    ____  _____  ____  ____ \n"
"/ ___\\/ \\/ \\__//  __\\/ \\  /  __/  /   _\\/  _ \\/ \\  /   _\\/ \\ /\\/ \\  /  _ \\/__ __\\/  _ \\/  __\\\n"
"|    \\| || |\\/||  \\/|| |  |  \\    |  /  | / \\|| |  |  /  | | ||| |  | / \\|  / \\  | / \\||  \\/|\n"
"\\___ || || |  ||  __/| |_/\\  /_   |  \\__| |-||| |_\\  \\_ | \\_/|| |_/\\ |-||  | |  | \\_/||    /\n"
"\\____/\\_/\\_/  \\_/   \\____|____\\  \\____/\\_/ \\|\\____|____/\\____/\\____|_/ \\|  \\_/  \\____/\\_/\\_\\\n"
  );
  printf("\n\n\n");
  printf("                                                                    --MID3EE");
  printf("\n\n\n\n\n");
  printf("          [+  ,  -  ,  *  ,  /  ,  ^]\n\n\n");
  printf("Enter 2 numbers:\n");
  if (scanf("%f %f", &num1, &num2) != 2) {
    printf("Invalid Input. Please enter valid numbers");
    return 1;
  }
  printf("Enter '+' for addition:\n");
  printf("Enter '-' for subtraction:\n");
  printf("Enter '*' for multiplication:\n");
  printf("Enter '/' for division:\n");
  printf("Enter '^' for exponent:\n");
  scanf(" %c", &operator);

  switch (operator) {
  case '+':
    printf("The answer of %.2f + %.2f is %.2f\n", num1, num2, num1 + num2);
    break;
  case '-':
    printf("The answer of %.2f - %.2f is %.2f\n", num1, num2, num1 - num2);
    break;
  case '*':
    printf("The answer of %.2f * %.2f is %.2f\n", num1, num2, num1 * num2);
    break;
  case '/':
    if (num2 == 0) {
      printf("Denominator cannot be zero\n");
      break;
    }
    printf("The answer of %.2f / %.2f is %.2f\n", num1, num2, num1 / num2);
    break;
  case '^':
    printf("The answer of %.2f ^ %.2f is %.2f\n", num1, num2, pow(num1, num2));
    break;
  default:
    printf("Invalid Input!! Please try again\n");
  }

  return 0;
}

