#include <iostream>
class FiboPrime
{
    int m,n;
    int isPrime(int);
    public:
        void getRange();
        void fibonacci();
};
void FiboPrime::getRange()
{
    int i,ans;
    std:: cout << "Enter the lower limit of the range: ";
    std:: cin >> m;
    std:: cout << "Enter the upper limit of the range: ";
    std:: cin >> n;
    std:: cout << "\nFibonacci numbers which are prime in this range: ";
    fibonacci();
}
void FiboPrime:: fibonacci()
{
    int a=0,b=1,c;
    while(a<=n)
    {
        if (a>=m && isPrime(a))
            std:: cout << a << "  ";
        c=a+b;
        a=b;
        b=c;
    }
}
int FiboPrime::isPrime(int i)
{
    int j;
    for(j=2;j<=i/j;j++)
        if(i%j==0)
        break;
    if(j>i/j)
        return 1;
    return 0;
}
int main()
{
    FiboPrime p1;
    p1.getRange();
    return 0;
}