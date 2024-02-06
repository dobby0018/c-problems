#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the number of nodes and edges"<<endl;
    cin>>n>>m;
    bool vis[n];
    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    vis[i]=0;

    int x,y;
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    vis[1]=true;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        cout<<node<<endl;
        vector<int>::iterator it;
        for (it  = adj[node].begin(); it < adj[node].end(); it++)
        {
            if(!vis[*it])
            {
                vis[*it]=1;
                q.push(*it);
            }
        }
        
    }
    
    
    
}