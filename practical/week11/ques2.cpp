/*
Name : Dheeraj Soni
University Roll NO : 2017323
Section : CE
Problem Statement : Design an algorithm and implement it using a program to find
number of ways in which these coins can be added to make sum value equals to target.
*/
#include<bits/stdc++.h>
using namespace std;

int countWays(vector<int> coins, int n, int target){
    if(target == 0) return 1;
    if(target < 0) return 0;

    if(n <= 0 && target >= 1) return 0;

    return countWays(coins, n-1, target) + countWays(coins, n, target-coins[n-1]);
}

int main(){
    int n, target, val;
    cin>>n;
    vector<int> coins;
    for(int i=0 ; i<n ; i++){
        cin>>val;
        coins.push_back(val);
    }
    cin>>target;
    cout<<countWays(coins, n, target);
    return 0;
}
