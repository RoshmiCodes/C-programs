#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,rowsa,colsa,rowsb,colsb,k;
    printf("\nEnter size of Matrix A:");
    scanf("%d%d",&rowsa,&colsa);
    int A[rowsa][colsa];
    printf("\nEnter elements of Matrix A:");
    for(i=0;i<rowsa;i++)
        for(j=0;j<colsa;j++)
            scanf("%d",&A[i][j]);
    printf("\nEnter size of Matrix B:");
    scanf("%d%d",&rowsb,&colsb);
    int B[rowsb][colsb];
    printf("\nEnter elements of Matrix B:");
    for(i=0;i<rowsb;i++)
        for(j=0;j<colsb;j++)
            scanf("%d",&B[i][j]);
    printf("\nMATRIX A:\n");
    for(i=0;i<rowsa;i++)
    {
        for(j=0;j<colsa;j++)
            printf("%d\t",A[i][j]);
        printf("\n");
    }
    printf("\nMATRIX B:\n");
    for(i=0;i<rowsb;i++)
    {
        for(j=0;j<colsb;j++)
            printf("%d\t",B[i][j]);
        printf("\n");
    }
    if(rowsb==colsa)
        printf("\nMatrix multiplication is possible.\n");
    else 
    {
        printf("\nMatrix multiplication is NOT possible.\n");
        exit(0);
    }
    int C[rowsa][colsb];
    for(i=0;i<rowsa;i++)
        for(j=0;j<colsb;j++)
        {
            C[i][j]=0;
            for(k=0;k<rowsb;k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    printf("\nMATRIX A x MATRIX B = MATRIX C");
    printf("\nMATRIX C:\n");
    for(i=0;i<rowsa;i++)
    {
        for(j=0;j<colsb;j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
}