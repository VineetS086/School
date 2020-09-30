#include<iostream>

using namespace std;

int main()
{
    int len,swp,low;
    cout<<"Enter The Number To Elements: ";
    cin>>len;

    int arr[len],lst[len];
    cout<<"Enter The Elements: ";
    for(int i = 0; i<len; i++)
        cin>> arr[i];
    for(int i=0; i<len; i++)
    {   low = i;
        for(int j=i+1; j<len; j++)
        {
            if(arr[j]<arr[low])
            {
                low = j;
            }
        }
        swp = arr[i];
        arr[i] = arr[low];
        arr[low] = swp;
    }
    cout<<"\nAscending Sorted arr: ";
    for(int i=0; i<len; i++)
        {cout<<arr[i]<<", ";
        lst[len-1-i] = arr[i];}
    cout<<"\nDecending Sorted arr: ";
    for(int i=0; i<len; i++)
        cout<<lst[i]<<", ";
    cout<<endl;
}
