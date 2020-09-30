#include <bits/stdc++.h>

using namespace std;

int func(int num)                   //The Func
{
    int arr[10] = {0};              //arr which counts no of digits
    int i,sum=0;                    //helping int, sum of unique digits

    while (num>0)
    {
        i = num%10;
        arr[i]++;
        num=num/10;
    }
    for(i=0; i<10; i++)
        if (arr[i]>0) sum+=i;       //if no. of occ>1 Sum+=digit

    cout<<endl;
    return sum;
}

int main()
{
    unsigned int num;

    cout<< "Enter The Number: " ;
    cin>> num;                          //The Number

    cout<<func(num);                    //Calling The Func
    return 0;
}
