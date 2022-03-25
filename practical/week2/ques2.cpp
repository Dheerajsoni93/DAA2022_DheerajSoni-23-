#include<iostream>
using namespace std;

int main()
{
     int com = 0, n;
     cout<<"Enter the size of array: ";
     cin>>n;
     int arr[n];
     //input the elements of array
     cout<<"Enter the elements: ";
     for(int i=0 ;i<n ; i++)
        cin>>arr[i];

    //Selection Sort
    for(int i=0 ;i<n-1 ; i++)
    {
        int min_index = i;
        for(int j=i+1 ; j<n ; j++)
            if(arr[j] < arr[min_index])
            {
                min_index = j; 
                com++;
            }

        //swapping elements af array
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    //printing array
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<"\n"<<"Total number of comparison: "<<com;
    return 0;
}
