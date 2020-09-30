#include<iostream>

using namespace std;

int main()
{
    int n = 10;
    int p = 2;
    while (n>0)
    {
        bool flag = true;
        for(int i = 2; i<p;i++)
        {
            if (p%i==0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout<<p<<endl;
            n--;
        }
        p++;
    }
}
