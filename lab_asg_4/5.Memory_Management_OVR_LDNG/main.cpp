#include<iostream>

using namespace std;

class Complex
{
    int i;
    int j;

public:
    Complex(){     //Defining zero argument constructor
    }

    Complex(int real,int imag)   //Defining parametrized constructor
    {
        this->i=real;
        this->j=imag;
    }

    void display()  // Function to Print the complex number
    {
        cout<<"Complex Number: "<<endl;
        cout<<i<<" + "<<j<<"j"<<endl;
    }

    void setComplex(int a,int b)  //Function to set the complex number
    {
        i=a;
        j=b;
    }

    void *operator new(size_t size)  //overloaded new operator defined
    {
        void *ptr;
        cout<<"Allocating memory..."<<endl;
        ptr=malloc(size);
        return ptr;
    }

    void operator delete(void *ptr)   //overloaded delete operator defined
    {
        cout<<"Deleting..."<<endl;
        free(ptr);
        cout<<"Successfully Deleted..."<<endl;
    }
};

int main()
{
    int real,imag;

    cout<<"Enter the real part: ";
    cin>>real;
    cout<<"Enter the imaginary part: ";
    cin>>imag;

    Complex *obj1 = new Complex(real,imag); //Creating object dynamically using overloaded new operator
    obj1->display();

    delete obj1;  //Deleting the Complex number by overloaded delete operator
    return 0;
}
