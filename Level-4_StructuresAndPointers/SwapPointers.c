#include <stdio.h>
int swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("\n Enter two numbers for swapping: ");
    scanf("%d%d",&a,&b);
    printf("\n The numbers before swapping are: %d and %d",a,b);
    swap(&a,&b);
    printf("\n The numbers after swapping are: %d and %d",a,b);
    return 0;
}