/*
Name : Dheeraj Soni
University Roll NO : 2017323
Section : CE
Problem Statement : Given a directed graph, design an algorithm and implement it using a program to find whether cycle exixts in 
the graph or not.
*/

#include<bits/stdc++.h>
using namespace std;

bool dfs(int vertex, set<int>&visited, int parent, int node, vector<vector<int>> G) {
   visited.insert(vertex);
   for(int v = 0; v<node; v++) {
      if(G[vertex][v]) {
         if(v == parent)    //if v is the parent not move that direction
            continue;
         if(visited.find(v) != visited.end())    //if v is already visited
            return true;
         if(dfs(v, visited, vertex, node, G))
            return true;
      }
   }
   return false;
}

bool hasCycle(int node, vector<vector<int>> G){
    set<int> visited;       //visited set
   for(int v = 0; v<node; v++) {
      if(visited.find(v) != visited.end())    //when visited holds v, jump to next iteration
         continue;
      if(dfs(v, visited, -1, node, G)) {    //-1 as no parent of starting vertex
         return true;
      }
   }
   return false;
}

int main()
{
    int n, u, v, ele;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    vector<vector<int>> G;
    for(int i=0 ; i<n ; i++){
        vector<int> temp;
        for(int j=0 ; j<n ; j++){
            cin>>ele;
            temp.push_back(ele);
        }
        G.push_back(temp);
        temp.clear();
    }
    if(hasCycle(n, G)) cout<<"Yes Cycle Exist"<<endl;
    else cout<<"No Cycle Exist"<<endl;
    return 0;
}
