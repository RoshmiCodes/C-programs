#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    float *ptr,sum=0.0,avg;
    printf("\nEnter how many numbers:");
    scanf("%d",&n);
    ptr=(float*)malloc (n* sizeof(float));
    if(ptr==NULL)
    {
        printf("\nMemory not allocated.");
        return 0;
    }
    printf("\nEnter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",ptr+i);
        sum+=(*ptr+i);
    }
    avg=sum/n;
    printf("\nAverage= %0.2f",avg);
    free(ptr);
    return 0;
}