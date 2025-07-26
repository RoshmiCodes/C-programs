//Fibonacci series using Recursion technique
#include <stdio.h>
int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int i,x;
    printf("Enter number range: ");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        printf("%d\t",fibonacci(i));
    }
    printf("\n");
    return 0;
}