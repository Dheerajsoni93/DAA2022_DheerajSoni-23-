#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t != 0)
    {
    int n;
    cin>>n;
    int arr[n], key;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    cin>>key;
    int i=0, comparison = 0, flag=0;
    for(int i=0 ; i<n ; i+=2)
    {
        comparison++;
        if(key == arr[i])
        {
            cout<<"Present "<<comparison<<endl;
            flag = 1;
            break;
        }
        if(key < arr[i])
            break;
    }
    for(int x=i ; x>=0 ; x--)
    {
        comparison++;
        if(arr[x] == key)
        {
            cout<<"Present "<<comparison<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<"Not Present "<<comparison<<endl;
    t--;
    }
    return 0;
}
