#include<iostream>
#include<cmath>
using namespace std;
int cyclic_sum(int num)
{
    int sum = 0, len;                       //THe Sum
    len = (log10(num)) + 1;                 //length of num (log10)
    int digits[len];
    for(int i = len-1; i>=0; i--)
    {
        digits[i] = num%10;                 //Taking all digits in an arr septly as ints
        num/=10;
        //cout<<digits[i];
    }
    //cout<<endl;
    for(int i = 0; i<len-1; i++)
    {
        sum+= digits[i] + digits[i+1];               //Main Logic for cyclic sum
    }
    sum+= digits[0] + digits[len-1];
    return sum;
}
/*
Cyclic Sum:
eg: 14553
Cyc_sum = (1+4)+(4+5)+(5+5)+(5+3)+(3+1)
=36
*/

int main()
{
    int num;                        //THe Number
    cout << "Enter The Number: ";
    cin>>num;
    cout<<cyclic_sum(num);            //Calling THe Function
    return 0;
}
