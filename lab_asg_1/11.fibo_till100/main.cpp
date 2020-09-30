#include<iostream>

using namespace std;

int main()
{   cout<<"Fibonacci till 100:\n";
    int a = 0,b = 1,c;
    while(b<=100)
    {
        cout<<b<<endl;
        c = b;
        b = a+b;
        a = c;
    }
    return 0;
}
