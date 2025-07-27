//Reverse a Number using Recursion technique
#include <stdio.h>
int reverse(int n, int rev) 
{
    if(n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}
int main()
{
    int num;
    printf("\nEnter a number to print its reverse: ");
    scanf("%d",&num);
    printf("The reverse of %d is= %d",num,reverse(num,0));
    return 0;
}