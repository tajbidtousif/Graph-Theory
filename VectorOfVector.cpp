#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N;
    cin >> N;

    vector<vector<int>> v;

    for(int i=0; i<N; i++)
    {
        int n;
        cin >> n;

        vector<int> temp;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }

        v.push_back(temp);
    }

    v.push_back(vector<int>());

    for(int i=0; i<N; i++)
    {
        cout << "Size : " << v[i].size() << endl;

        for(int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }

        cout << endl;
    }

   // cout << v[0][1];
}