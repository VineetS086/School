#include <iostream>
#include<cstring>
using namespace std;

void func(string str)
{
    int alphabets[26] = {0};                //all possible apbt
    int len = str.length();

    for(int i = 0; i<len; i++)
        alphabets[int(str[i])-65]++;        //occ of apbt

    for(int i = 0; i<26; i++)
    {
        if (alphabets[i])
        {
            cout<<char(65+i)<<" : ";
            cout<<alphabets[i]<<endl;
        }
    }

}

string conv(string str)                                     //converting to upper case
{
    int len = str.length();
    for(int i = 0; i<len; i++)

        if(int(str[i]>96 && str[i]<=122))
            str[i]+=-32;                                // ASCII value - 32 if lower

    return str;
}



int main()
{
    string str;                 //main String
    cout<<"Enter The String: ";
    cin>>str;
    str = conv(str);                //converting to upper case
    func(str);                      //opt unique alphabets

}
