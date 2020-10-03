#include <iostream>

using namespace std;

class IDOL
{
    int a;

public:
    IDOL(int x)                    //constructor to initialize value
    {a=x;}

    int operator +()                //unary operator overloading
    {a=a+1;}                        // increment

    int operator -()                //unary operator overloading
    {a=a-1;}                        // decrement

    void display ()                 //to display data
    {
        cout<<"a="<<a<<"\n";
    }
};

int main()
{
    cout << "Enter value of a: ";
    int x;
    cin>>x;

    IDOL obj(x);               //declare object obj

    +obj;                       //call +operator
    obj.display();

    -obj;                       //call -operator
    obj.display();

    return 0;
}
