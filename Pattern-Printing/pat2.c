/*
Right Half Pyramid
*/
#include <stdio.h>
int main() {
  int s, i, j, n;
  printf("Enter the no of rows:\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (s = 0; s <= n - i; s++) {
      printf(" ");
    }
    for (j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}
