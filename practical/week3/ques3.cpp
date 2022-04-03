#include<iostream>
using namespace std;

bool find(int arr[], int n)
{
    for(int i=0 ; i<n-2 ; i++)
    {
        for(int j=i+1 ; j<n-1 ; j++)
        {
            for(int k=j+1 ; k<n ; k++)
            {
                if(arr[i] + arr[j] == arr[k])
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n, key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    cout<<find(a, n);
    return 0;
}
