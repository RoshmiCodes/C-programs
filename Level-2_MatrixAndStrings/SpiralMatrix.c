#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter the size of the square matrix: ");
    scanf("%d",&n);
    int matrix[n][n];
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
    printf("\nThe matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("\t%d", matrix[i][j]);
        printf("\n");
    }
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    printf("Spiral Order:\n");
    while (top <= bottom && left <= right) 
    {
        for (int i = left; i <= right; i++) 
        {
            printf("%d ", matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) 
        {
            printf("%d ", matrix[i][right]);
        }
        right--;
        if (top <= bottom) 
        {
            for (int i = right; i >= left; i--) 
            {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) 
        {
            for (int i = bottom; i >= top; i--) 
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
    return 0;
}