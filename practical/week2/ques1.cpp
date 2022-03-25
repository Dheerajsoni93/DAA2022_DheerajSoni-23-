#include<iostream>
using namespace std;

int main()
{
    int comparison = 0, n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    //input the elements in array
    cout<<"Enter the elements: ";
    for(int i=0 ; i<n ; i++)    
        cin>>arr[i];

    //Bubble sorting
    for(int i=0 ; i<n ; i++)
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                comparison++;
            }
        }

    //printing array
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<"\n"<<"Total number of comparisons are: "<<comparison;
    return 0;
}
