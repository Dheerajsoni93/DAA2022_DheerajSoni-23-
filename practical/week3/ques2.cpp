#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the size of array: ";
    for(int i=0 ;i<n ;i++)
        cin>>arr[i];
    cout<<"Enter the key: ";
    cin>>key;

    for(int i=0 ;i<n-1 ; i++)
        for(int j=i+1 ; j<n ;j++)
            if(abs(arr[i]- arr[j]) == key)
                    cout<<"indexes are"<<i<<j<<" ";
    return 0;
}
