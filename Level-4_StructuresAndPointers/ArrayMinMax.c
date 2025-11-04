#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*p,min,max;
    printf("Enter the size: ");
    scanf("%d",&n);
    p=(int*) malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("\nMemory allocation unsuccessful!");
        return 0;
    }
    printf("\nEnter the numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    max=*p;
    min=*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>max)
            max=*(p+i);
        if(*(p+i)<min)
            min=*(p+i);
    }
    printf("\nMaximum number= %d",max);
    printf("\nMinimum number= %d",min);
}