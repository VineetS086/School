#include<iostream>

using namespace std;

int main()
{
    string str;
    char c;
    cout<<"Enter The String :";
    cin>>str;
    int len = str.size();
    for(int i = 0; i<len/2; i++)
        {c = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = c;}

    cout<<endl<<"Reversed String: "<<str;


    return 0 ;
}
