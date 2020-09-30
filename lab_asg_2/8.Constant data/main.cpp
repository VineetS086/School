#include <bits/stdc++.h>
#include <iostream>

using namespace std;
class Circle
{
    public:
        double radius = 0; //variables
        const float pi = 3.1416 ;
    double getArea()
    { //Class Method
        return pi * radius* radius ;
    }
    void set_rad(double rad)
    {
        radius = rad;
    }
};
// main function for the program
int main()
{
    int r;
    Circle c1; // object defined
    double area = 0.0; // area


    cout<<"Enter The Radius: ";
    cin >> r ; //inputting radius

    c1.set_rad(r) ;
    area = c1.getArea();

    cout << area <<endl; // printing area
    return 0 ;
}
