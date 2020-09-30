#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The Range: ";
    cin>>n;
    bool primes[n+1];
    memset(primes, true, sizeof(primes));

    for(int p = 2; p<=sqrt(n); p++)
    {
        if (primes[p])
        {
            for(int i=p*p; i<=n; i+=p)
                primes[i]=false;
        }}
    int x = 0;
    cout<<"[ ";
    for(int p = 2; p<=n; p++)
    {
        if(primes[p])
            {cout<<p<<", ";
            x++;}
    }
    cout<<" ]\n\n------There are "<<x<<" Prime numbers till "<<n<<".------\n";


}
