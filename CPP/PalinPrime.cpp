#include <iostream>
class PalinPrime
{
    int m,n;
    int isPrime(int);
    void palindrome(int);
    public:
        void getRange();
        void getNum();
};
int main()
{
    PalinPrime obj;
    obj.getRange();
    obj.getNum();
    return 0;
}
inline void PalinPrime :: getRange()
{
    std :: cout << "Enter the lower limit: ";
    std :: cin >> m;
    std :: cout << "Enter the upper limit: ";
    std :: cin >> n;
}
void PalinPrime :: getNum()
{
    int i;
    std :: cout << "Palindrome numbers in this range which are prime: \n";
    for(i=m;i<=n;i++)
        palindrome(i);
}
void PalinPrime :: palindrome(int x)
{
    int c=x,s=0,ans;
    while(c)
    {
        s = s*10 + c%10;
        c/=10;
    }
    if(s==x)
    {
        ans = isPrime(x);
        if(ans)
            std :: cout << x << "   ";
    }
}
int PalinPrime :: isPrime(int i)
{
    int j;
    for(j=2;j<=i/j;j++)
        if(i%j==0)
        break;
    if(j>i/j)
        return 1;
    return 0;
}