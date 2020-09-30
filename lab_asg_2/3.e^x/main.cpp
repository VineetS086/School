#include<iostream>
#include<math.h>
using namespace std;

int fact(int x)
{
    int ans = 1;
    for (x; x>1; x--)
        ans*=x;
    return ans;
}

double func(double x)
{
    double ans = 0;
    for(int i = 0; i<25; i++)        //range = 6
        ans+=x/fact(i);              //element of eqn
    return ans;
}


int main()
{
    float x;
    cout<< "Enter x: ";
    cin>>x;
    cout<<func(x);              // Function that does it
    return 0;
}
