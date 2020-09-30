#include <iostream>

using namespace std;

class Cube
{
    public:
    int side;
    int getVolume()
    {
        return side*side*side;      //returns volume of cube
    }
};

int main()
{
    Cube C1;
    cout<<"Enter Side of C1: ";
    cin>>C1.side;            // setting side value

    cout<< "Volume of cube C1 = "<< C1.getVolume();
}
