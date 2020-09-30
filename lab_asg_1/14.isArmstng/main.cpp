#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num , sum = 0,x;
    cout<<"Enter The Number: ";
    cin>>num;
    string str = to_string(num);
    //cout<<str;
    int len = str.size();
    for(int i = 0; i<len; i++)
    {
        x = int(str[i])-48;
        sum+=x*x*x;
    }
    cout<<endl;
    if(sum==num)
        cout<<num<<" Is An Armstrong Number."<<endl;
    else cout<<num<<" Is Not An Armstrong Number."<<endl;

    return 0;
}
