#include<iostream>
using namespace std;

int main()
{
    int com=0, n, key, j;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    //imput the elements in array
    cout<<"Enter the elements: ";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    //insertion sort
    for(int i=1 ; i<n ; i++)
    {
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
            com++;
        }
        arr[j+1] = key;
    }

    //printing array
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<"\nTotal number of comparison: "<<com;
    
}
