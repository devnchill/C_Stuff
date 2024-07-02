#include <stdio.h>
// function to find the minimum no
int min(int a, int b) {  
  if (a < b)
    return a;
  else
    return b;
}
int main() {

  int n, m;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      m = min(i, j);
      printf("%d ", n - m);
    }
    for (int j = n - 2; j >= 0; j--) {
      m = min(i, j);
      printf("%d ", n - m);
    }
    printf("\n");
  }
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j < n; j++) {
      m = min(i, j);
      printf("%d ", n - m);
    }
    for (int j = n - 2; j >= 0; j--) {
      m = min(i, j);
      printf("%d ", n - m);
    }
    printf("\n");
  }
  return 0;
}
