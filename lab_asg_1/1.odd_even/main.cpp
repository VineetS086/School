#include<iostream>

using namespace std;

int main()
{
    int n ;
    cout<< "Enter the Number: ";
    cin>> n;
    if (n<=0){
        cout<<"Invalid Entry";
    }
    else if (n%2==0){
        cout<<n<<" is an even number.";
    }
    else{
        cout<<n<<"is an odd number."<<endl;

    }
    return 0;

 }

