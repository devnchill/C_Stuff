// Hourglass Pattern
#include <stdio.h>
int main() {
  int n;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int space = 0; space < n; space++) {
      printf(" ");
    }
    for (int star = 2 * n - 1; star > 0; star--) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
