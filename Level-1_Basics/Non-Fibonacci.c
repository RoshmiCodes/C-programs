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
    int i,x,j,found;
    printf("Enter number range: ");
    scanf("%d",&x);
    int a[x];
    for(i=0;i<=x;i++)
    {
        a[i]=fibonacci(i);
    }
    for(i=1;i<=a[x];i++) 
    {   
        found=0;             
        for(j=0;j<=x;j++) 
        {
            if(a[j]==i) 
            {
                found=1;
                break;
            }
        }
        if(!found) 
        {
            printf("%d\t",i);
        }
    }
    return 0;
}