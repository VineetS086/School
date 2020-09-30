#include <bits/stdc++.h>
using namespace std;
class Bank_Client           //Data members: AC_no No,Name ,Balance ; Class member function:  display_balance, withdraw , deposit ;
{
    // Access specifier
    public:

    // Data Members
    string name;
    string AC_no;
    int balance;

    // Member Functions()

    void display_balance()
    {
        cout<<"\n"<<name<<"'s Balance is $"<<balance<<"/-\n";
    }

    void withdraw()
    {
        int i;
        display_balance();
        cout<<"Enter the Amount you'd like to withdraw: ";
        cin>>i ;
        balance+=-i;
        cout<<"DONE ";
        display_balance();
    }

    void deposit()
    {
        display_balance();
        int i;
        cout<<"Enter the Amount you'd like to deposit: ";
        cin>>i ;
        balance+=i;
        cout<<"DONE ";
        display_balance();
    }


};

int main() {               //SIMPLE TEST CASE

    Bank_Client obj1;
    obj1.name = "Raj";
    obj1.AC_no = "SBIN122234565445";
    obj1.balance = 5000;
    obj1.display_balance();
    obj1.withdraw();
    obj1.deposit();

    return 0;
}
