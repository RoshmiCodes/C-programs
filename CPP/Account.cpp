#include <iostream>
using namespace std;
class Account
{
    int balance;
    public:
        void getData(int b)
        {
            balance=b;
        }
        void displayData();
        void withdraw(int w);
        void deposit(int d);
};
inline void Account :: displayData()
{
    cout << "\nCurrent balance is: " << balance;
}
inline void Account :: deposit(int d)
{
    balance += d;
    cout << "\nYour balance after deposit is: " << balance;
}
void Account :: withdraw(int w)
{
    if((balance-w)>=1000)
    {
        balance -= w;
        cout << "\nBalance after withdrawal is: " << balance;
    }
    else 
        cout << "\nSorry, low balance.";
}
int main()
{
    int b=1000,amt,ch;
    Account obj;
    obj.getData(b);
    while(1)
    {
        cout << "\n1. Display Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch(ch)
        {
            case 1:
                obj.displayData();
                break;
            case 2:
                cout << "\nEnter amount to be deposited...";
                cin >> amt;
                obj.deposit(amt);
                break;
            case 3:
                cout << "\nEnter amount to be withdrawn...";
                cin >> amt;
                obj.withdraw(amt);
                break;
            case 4: 
                return 0;
            default:
                cout << "\nInvalid choice!";
        }
    }
    return 0;
}