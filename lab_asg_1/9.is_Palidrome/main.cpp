#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cout<<"Enter The String: ";
    cin>>str;
    cout<<"\n"<<str;

    int flag = true;
    int len = str.size();

    for(int i = 0;i<=len/2;i++)
    {
        if (str[i]!=str[len-1-i])
            flag = false;
    }
    if(flag)
        cout<<" Is A Palidrome\n";
    else
        cout<<" Is Not A Palidrome\n";

    return 0;
}
