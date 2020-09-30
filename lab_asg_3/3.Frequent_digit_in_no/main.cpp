#include <iostream>

using namespace std;

int func(int num)           //The Function That does it
{
    int m = 0;
    int digits[10] = {0};      //THe Digits

    while(num>0)
    {
        digits[num%10]++;
        num/=10;
    }
    for(int i = 1; i<10; i++)
    {
        if (digits[m]<digits[i])m=i;        //max Occ Check
        cout<<digits[i];
    }
    cout<<endl;
    return m;                               //digits index with max OCC
}
int main()
{
    int num;
    cout<<"Enter The Number:";
    cin>>num;                 //THe Number
    cout<<func(num);
}
