#include <stdio.h>
#include <math.h>
void power(int x, int n)
{
    int y;
    y=(int)pow(x,n);
    printf("%d raised to the power %d gives us= %d",x,n,y);
}
int fact(int n)
{
    if(!n || n==1)
        return 1;
    return n*fact(n-1);
}
int gcd(int a, int b) 
{
    if(!b)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int ch,n,x,ans;
    while(1)
    {
        printf("\n=====MENU=====\n1.Calculate x raised to the power n\n2.Factorial of n\n3.GCD of two numbers\n4.Exit\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter base value:");
                scanf("%d",&x);
                printf("Enter exponent value:");
                scanf("%d",&n);
                power(x,n);
                break;
            case 2:
                printf("\nEnter the number:");
                scanf("%d",&n);
                ans=fact(n);
                printf("The factorial of %d is = %d",n,ans);
                break;
            case 3:
                printf("\nEnter two numbers:");
                scanf("%d",&x);
                scanf("%d",&n);
                ans=gcd(x,n);
                printf("The GCD of %d and %d is= %d",x,n,ans);
                break;
            case 4:
                printf("Exiting program.....");
                return 0;
            default:
                printf("\nOops! Wrong input!");
        }
    }
    return 0;
}