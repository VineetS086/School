#include <iostream>
#include<math.h>
using namespace std;

int facto(int n)            //factorial function
{
    int ans = 1;
    for(n;n>0;n--)
        ans*=n;
    return ans;
}

int main()
{
    float x, cos = 0;
    cout << "Enter The Number/Angle: ";
    cin>> x;                                //angle in radians

    for(int i = 0; i<=22; i+=2)
    {
        cos+=pow(-1,i/2)*pow(x,i)/facto(i);     // Element of generalize EQN
    }

    cout<<cos;

    return 0;
}
