#include <stdio.h>
int main()
{
    int n,i,j,sum1=0,sum2=0;
    printf("\nEnter the size of the square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    printf("\nThe matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("\t%d", arr[i][j]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                sum1=sum1+arr[i][j];
            if(i+j==n-1)
                sum2=sum2+arr[i][j];
        }
    }
    printf("\nThe sum of left diagonal= %d",sum1);
    printf("\nThe sum of right diagonal= %d",sum2);
    return 0;
}