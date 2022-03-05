#include<iostream>
using namespace std;

int main()
{
    int n, i, key, left, right, flag=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    left = 0, right = n-1;
    cout<<"Enter the elements: ";
    for(i=0 ; i<n ; i++)
        cin>>arr[i];
    cout<<"Enter the key: ";
    cin>>key;
    while(left<=right)
    {
        int m = left + (right-1)/2;
        flag++;
        if(arr[m] == key)
        {
            cout<<"Element found!"<<endl;
            left = -1;
            break;
        }

        if(arr[m] < key)
            left = m+1;

        else
        {
            right = m-1;
        }
    }
    if(left == -1)
    {
    cout<<"Total number of comparison: "<<flag+1;
    }
    else{
        cout<<"Element Not Found!"<<endl;
        cout<<"Total number of comparison: "<<flag;
    }
    return 0;
}
