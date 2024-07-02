// Inverted Full Pyramid

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for (int i = 0; i < n; i ++){
        for (int s = 0; s< i; s ++){
            printf(" ");
        }
        for (int j = (2*(n-i)-1); j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
