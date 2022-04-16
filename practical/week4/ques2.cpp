#include<bits/stdc++.h>
using namespace std;


void quickSort(int arr[], int l, int h, int &comparison, int &swaps)
{
    if(l >= h) return;
    int pivot = arr[l];
    int i = l, j = h;
    while(i<j)
    {
        while(pivot >= arr[i]  && i<j)
        { i++; comparison++;}
        while(pivot < arr[j])
        { j--;  comparison++;}
        if(i<j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swaps++;
            }
    }
    arr[l] = arr[j];
    arr[j] = pivot;
    swaps++;
    quickSort(arr, l, j-1, comparison, swaps);
    quickSort(arr, j+1, h, comparison, swaps);
}

int main()
{
    int t, n;
    cin>>t;
    while(t != 0)
    {
        cin>>n;
        int arr[n], temp, j, k, comparison = 0, swap = 0;;
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        quickSort(arr, 0, n-1, comparison, swap);

        for(int i=0 ; i<n ; i++)
            cout<<arr[i]<<" ";
        cout<<"\ncomparison = "<<comparison<<endl;
        cout<<"swap = "<<swap<<endl;
        t--;
    }
    return 0;
}
