#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}