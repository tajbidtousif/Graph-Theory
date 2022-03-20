#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> &v)
{
    cout << "Size: " << v.size() << endl;

    for(auto V:v)
    {
        cout << V.first << " " << V.second << endl;
    }
}

int main()
{
    vector<pair<int, int>> v ;

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        
        v.push_back(make_pair(x, y));
    }

    printVec(v);

    

}