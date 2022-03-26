#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector <int> graph[N];
bool vis[N];

void DFS(int vertex)
{
    cout << "Vertex: " << vertex << endl;
    vis[vertex] = true;
    for(int child:graph[vertex])
    {
        cout << "per: " << vertex << "child: " << child << endl;
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
        int v1,v2;
        cin >> v1 >> v2;
        
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
        
        
    }
    
    DFS(1); // suppose the Root of a tree is 1;

    
   
}