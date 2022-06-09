/*
Name : Dheeraj Soni
University Roll NO : 2017323
Section : CE
Problem Statement : Given a list of activities with their starting time and finishing time. Your goal is to select
maximum number of activities that can be performed by a single person such that selected
activities must be non-conflicting. Any activity is said to be non-conflicting if starting time of an
activity is greater than or equal to the finishing time of the other activity. Assume that a person
can only work on a single activity at a time.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, f;
    cin>>n;
    vector<pair<int, int>> activity(n), helper(n);
    for(int i=0 ; i<n ; i++){
        cin>>s;
        activity[i].first = s;
    } 
    for(int i=0 ; i<n ; i++){
        cin>>f;
        activity[i].second = f;
    }
   helper = activity;
   sort(helper.begin(), helper.end(), [](pair<int, int>a , pair<int, int>b)
   {return a.second < b.second; });

   vector<int> selected;
   int count = 0, currEnd = 0, index;
   for(int i=0 ; i<n ; i++){
       if(helper[i].first >= currEnd){
           index = find(activity.begin(), activity.end(), helper[i]) - activity.begin();
           selected.push_back(index + 1);
           count++;
           currEnd = helper[i].second;
       }
   }

   cout<< "No. of selected activities: "<<count<<endl;
   cout<<"List of selected activities: ";
   for(auto it : selected)
        cout<<it<< " ";
    return 0;
}
