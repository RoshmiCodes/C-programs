//FINDING MISSING ELEMENT IN AN ARRAY USING XOR LOGIC
#include <stdio.h>
int main()
{
    int n,i,xor1=0,xor2=0,missing;
    printf("\n ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&n);
    int arr[n-1];
    printf("\n ENTER THE ELEMENTS OF THE ARRAY: ");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nTHE GIVEN NUMBERS IN THE ARRAY: \n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        xor1^=i;
    }
    for(i=0;i<n-1;i++)
    {
        xor2^=arr[i];
    }
    missing=xor1^xor2;
    printf("\nThe missing number is: %d\n", missing);
}