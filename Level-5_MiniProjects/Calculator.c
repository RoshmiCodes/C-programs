#include <stdio.h>
int main()
{
    int ch;
    float num1,num2;
    printf("\nEnter the numbers: ");
    scanf("%f%f",&num1,&num2);
    printf("\n\tMENU:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nEnter your choice(1-4): ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\nSum= %f",num1+num2);
            break;
        case 2:
            printf("\nDifference= %f",num1-num2);
            break;
        case 3:
            printf("\nProduct= %f",num1*num2);
            break;
        case 4:
            printf("\nQuotient= %f",num1/num2);
            break;
        default:
            printf("\nSystem will terminate. Bye.");
            break;
    }
    return 0;
}