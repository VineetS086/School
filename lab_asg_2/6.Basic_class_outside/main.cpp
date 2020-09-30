#include <iostream>

using namespace std;

class Cube
{
    public:
    int side;
    int getVolume();
};

// member function defined outside class definition
int Cube :: getVolume()
{
    return side*side*side;
}



int main()
{
    Cube C1;
    cout<<"Enter Side of C1: ";
    cin>>C1.side;            // setting side value

    cout<< "Volume of cube C1 = "<< C1.getVolume();
}
