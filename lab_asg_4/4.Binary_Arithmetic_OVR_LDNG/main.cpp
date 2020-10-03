#include <iostream>

using namespace std;

class Binary
{
    int a;

public:
    Binary(){}
    Binary(int c)                    //constructor to initialize value
    {a=c;}

    Binary operator +(Binary x);           //binary operator overloading
    Binary operator -(Binary x);           //binary operator overloading
    void display ()                 //to display data
    {
        cout<<"a="<<a<<"\n";
    }
};

Binary Binary :: operator +(Binary  x)//binary operator overloading
{                               //for addition
    Binary temp;
    temp.a=a+x.a;
    return temp;
}

Binary Binary :: operator -(Binary x) //binary operator overloading
{                                 //for subtraction
    Binary temp;
    temp.a=a-x.a;
    return temp;
    }

int main()

{
    cout << "Enter num1 and num2: ";
    int num1,num2;
    cin>>num1;
    cin>>num2;

    Binary obj1(num1) ,obj2(num2),obj; //declare objects

    obj=obj1+obj2;              //call +operator
    obj.display();

    obj=obj1-obj2;              //call -operator
    obj.display();
    return 0;
}
