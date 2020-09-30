#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The Number: ";
    cin>>n;

    bool flag = true;

    if(n<2)
    {
        flag = false ;
    }
    else
    {
        for(int i = 2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    cout<<endl;
    return 0 ;
}
