#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10; 
vector<int> g[N];
int vis[N];
int level[N];

void bfs(int source)
{
    queue <int> q;
    q.push(source);
    vis[source] = 1;
    
    while(!q.empty())
    {
        int c_ver  = q.front();
        q.pop();
        
        for(int child:g[c_ver])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[c_ver] + 1;
            }
        }

    }
}


int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n-1; i++)
    {
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(1);

    for(int i=1; i<=n; i++)
    {
        cout << i << " : "<< level[i] << endl;
    }
}