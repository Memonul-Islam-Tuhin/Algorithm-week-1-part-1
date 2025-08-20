#include <bits/stdc++.h>
using namespace std;

vector<int> adj_mat[1005];
bool visited_arr[1005];

void DFS(int node)
{
    cout << node << " ";
    visited_arr[node] = true;

    for (int child : adj_mat[node])
    {
        if (!visited_arr[child])
        {
            DFS(child);
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj_mat[u].push_back(v);
        adj_mat[v].push_back(u);
    }

    memset(visited_arr, false, sizeof(visited_arr));

    DFS(0);

    return 0;
}

/*
input format :
7 7
0 2
2 4
0 1
1 5
1 3
0 3
3 6
*/