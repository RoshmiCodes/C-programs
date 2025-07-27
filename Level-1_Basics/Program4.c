#include <stdio.h>
#include <math.h>
int main()
{
    int n,copy,count=0,digit,num=0;
    printf("\n ENTER A NUMBER: ");
    scanf("%d",&n);
    copy=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=copy;
    while(n>0)
    {
        digit=n%10;
        num=num+pow(digit,count);
        n=n/10;
    }
    if(num==copy)
        printf("\n It is an Armstrong number.");
    else
        printf("\n It is not an Armstrong number.");
}