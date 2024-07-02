// HourGlass Pattern
#include <stdio.h>
int main() {
  int n;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int s = 0; s < i; s++) {
      printf(" ");
    }
    for (int star = 0; star < 2 * (n - i) - 1; star++) {
      printf("*");
    }
    printf("\n");
  }
  for (int i = n - 2; i >= 0; i--) {
    for (int s = 0; s < i; s++) {
      printf(" ");
    }
    for (int star = 0; star < 2 * (n - i) - 1; star++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
