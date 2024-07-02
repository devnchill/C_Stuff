// Rhombus Pattern
#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++)
    {
        for (int s = n-i ; s > 0; s--)
        {
            printf(" ");
        }
        for (int g = 0; g <n ; g++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
