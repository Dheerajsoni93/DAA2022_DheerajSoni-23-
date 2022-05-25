/*
Name : Dheeraj Soni
University Roll NO : 2017323
Section : CE
Problem Statement : Given a graph, design an algorithm and implement it using a program to find if a graph is bipartite
or not.
*/

#include<bits/stdc++.h>
using namespace std;
#include <queue>

bool isBipartite(vector<vector<int>> G, int src, int n)
{
    vector<int> colorArr(n, -1);
    colorArr[src] = 1;
    queue <int> q;
    q.push(src);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        if (G[u][u] == 1)
        return false;

        for (int v = 0; v < n; v++)
        {
            if (G[u][v] && colorArr[v] == -1)
            {
                
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }
            else if (G[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }
    return true;
}

int main()
{
    int n, u, v, ele;
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
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<G[i][j];
        }
        cout<<"\n";
    }

    isBipartite(G, 0, n) ? cout<<"YES Bipartite" : cout<<"Not Bipartite";
    return 0;
}
