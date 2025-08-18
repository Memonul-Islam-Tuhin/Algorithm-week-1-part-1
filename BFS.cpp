#include <bits/stdc++.h>
using namespace std;

vector<int> adj_mat[1005];
bool visited_arr[1005];

void BFS(int start)
{
    queue<int> que;
    que.push(start);
    visited_arr[start] = true;

    while (!que.empty())
    {
        int parent = que.front();
        que.pop();

        cout << parent << " ";

        for (int child : adj_mat[parent])
        {
            if (!visited_arr[child])
            {
                que.push(child);
                visited_arr[child] = true;
            }
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

    // for (int i = 0; i < n; i++)
    // {
    //     if (!visited_arr[i])
    //     {
    //         BFS(i);
    //     }
    // }

    BFS(1);
    return 0;
}

/*
input format :
7 7
0 1
0 2
3 0
1 3
2 3
3 4
4 3
 */