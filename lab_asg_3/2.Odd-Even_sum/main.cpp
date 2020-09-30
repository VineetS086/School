#include<bits/stdc++.h>

using namespace std;
void func(int num)                      //The func
{
    int sum_even = 0,sum_odd = 0,n;   //sums
    int digits[10] = {0};

    while(num>0)
    {
        digits[num%10]++;              //no of each digit
        num/=10;
    }

    for(int i=0;i<10;i++)
    {
        n = digits[i];
        if(i%2==1) sum_odd+=i*n;            //odd Sum
        else if(i%2==0) sum_even+=i*n;      //Even Sum
    }
    cout<<"Odd Sum: "<<sum_odd<<endl;
    cout<<"Even Sum: "<<sum_even<<endl;

}

int main()
{
    int num;
    cout<<"Enter The Number: ";
    cin>>num;
    func(num);                  //Calling Func
    return 0;
}
