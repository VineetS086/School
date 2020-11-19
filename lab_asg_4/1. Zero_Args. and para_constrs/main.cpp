#include <iostream>

using namespace std;

class Demo

{
    int arg1 ,arg2;

public:
    Demo(int i,int j=1)           // constructor
    {                           //second argument have default value = 0
        arg1=i;
        arg2=j;
    }

    void display()                 //function that displays data
    {
        cout<<"argument 1 = "<<arg1<<endl;
        cout<<"argument 2 = "<<arg2<<endl<<endl;
    }
};

int main()

{
    int num1 ,num2;
    cout<<"Enter two integers as arguments: ";
    cin>>num1;
    cin>>num2;

    Demo obj1(num1,num2),obj2(num1);   //creating object with two arg and one arg

    cout<<"\nObject 1: \n";
    obj1.display();

    cout<<"\nObject 2: \n";
    obj2.display();
    return 0;

}
