#include<bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cout<<"Enter the Year: ";
    cin>>year;
    if ((year%400==0)||(year%100!=0 && year%4==0))
        cout<<"\nLeap\n";
    else{cout<<"\nNot Leap\n";}

}
