#include <iostream>
using namespace std;

class A                     // eg Plants
{
    public:
        string type;

    string getType() {
        return type;
    }
    void display()
      {
        cout<<"Base class content.\n";
      }
    void enterData()
    {   cout<<"Enter Type: ";
        cin>>type;
    }

};

class B : public A          // eg flowers
{
    public:
        int age;

    int getAge() {
        return age;
    }
    void enterData()
    {   cout<<"Enter Type: ";
        cin>>type;
        cout<<"Enter Age: ";
        cin>>age;
    }
};

class C : public B          // eg Roses
{
    public:
        string color;

    string getCol() {
        return color;
    }
    void enterData()
    {   cout<<"\nEnter Type: ";
        cin>>type;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Color: ";
        cin>>color;
    }

};

int main()
{
    C obj;
    obj.display();
    obj.enterData();
    cout<<"\nAge is:"<<obj.getAge()<<endl;
    cout<<"\ntype is:"<<obj.getType()<<endl;
    cout<<"\ncolor is:"<<obj.getCol()<<endl;

    return 0;
}
