#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        printf("\n 1. Check if a number is Even or Odd \n 2. Find Factorial of a Number \n 3. Print Multiplication Table of a Number \n 4. Exit");
        int ch,n,i,fact=1,cont;
        printf("\n ENTER YOUR CHOICE: ");
        scanf("%d",&ch);
        if(ch<=3)
        {
            printf("\n ENTER THE NUMBER: ");
            scanf("%d",&n);
        }
        switch(ch)
        {
            case 1:
                if(n%2==0)
                    printf("\n %d is an even number.",n);
                else
                    printf("\n %d is an odd number.",n);
                break;
            case 2:
                for(i=1;i<=n;i++)
                {
                    fact=fact*i;
                }
                printf("\n Factorial of %d is: %d",n,fact);
                break;
            case 3:
                printf("\n The multiplication table of %d",n);
                for(i=1;i<=10;i++)
                {
                    printf("\n %d x %d = %d",n,i,n*i);
                }
                break;
            default:
                printf("\n WRONG INPUT. RUN PROGRAM AGAIN.");
        }
        printf("\n DO YOU WISH TO CONTINUE?(1/0)");
        scanf("%d",&cont);
        if(cont==0)
            exit(0);
    }
    return 0;
}