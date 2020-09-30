#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    int ans = 1;
    for(int i=2; i<=n;i++)
        ans*=i;
    return ans;
}

int main()
{
    int num;
    cout<<"Enter The Number: ";
    cin>>num;
    if (num>0)
    cout<<"\nFactorial of "<<num<<" = "<<factorial(num);

    else
        cout<<"\nOnly Whole Numbers are allowed.";
}
