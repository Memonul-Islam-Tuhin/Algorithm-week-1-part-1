#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, e;
    cin >> n >> e;

    int arr[n];

    vector<int> adj_list[n];

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "--->";
        for (int res : adj_list[i])
        {
            cout << res << " ";
        }

        cout << endl;
    }

    return 0;
}

/*
input format :
5 5
0 1
0 2
3 0
1 3
3 4
*/