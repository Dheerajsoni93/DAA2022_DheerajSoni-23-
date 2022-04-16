#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t != 0)
    {
        cin>>n;
        int arr[n], temp, j, k, swaps = 0, comp = 0;
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        for(int i=0 ; i<n-1 ; i++)
        {
            k = i;
            for(j=i+1 ; j<n ; j++)
            {
                if(arr[j] < arr[k])
                {
                    k=j;
                }
                comp++;
            }
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            swaps++;
        }
        for(int i=0 ; i<n ; i++)
            cout<<arr[i]<<" ";
        cout<<"\ncomparisons = "<<comp<<endl;
        cout<<"swaps = "<<swaps<<endl;
        t--;
    }
    return 0;
}
