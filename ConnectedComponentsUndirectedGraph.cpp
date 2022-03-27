#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector<int> graph[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> current_cc;

void DFS(int vertex)
{
    vis[vertex] = true;
    current_cc.push_back(vertex);

    for(int child: graph[vertex])
    {
        if(vis[child]) continue;

        DFS(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

    }

    for(int i=1; i<n; i++)
    {
        current_cc.clear();

        if(vis[i]) continue;
        DFS(i);
        cc.push_back(current_cc);
    }

    for(auto c_cc:cc)
    {
        for(int vertex:c_cc)
        {
            cout << vertex << " ";
        }
        
        cout << endl;
    }
    
}