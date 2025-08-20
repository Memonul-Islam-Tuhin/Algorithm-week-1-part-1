#include <bits/stdc++.h>
using namespace std;

vector<int> adj_mat[1005];
bool visited_arr[1005];
int level_arr[1005];

void BFS(int start_node)
{
    queue<int> que;
    que.push(start_node);

    visited_arr[start_node] = true;
    level_arr[start_node] = 0;

    while (!que.empty())
    {
        int curr_node = que.front();
        que.pop();

        for (int child : adj_mat[curr_node])
        {
            if (!visited_arr[child])
            {
                que.push(child);
                visited_arr[child] = true;
                level_arr[child] = level_arr[curr_node] + 1;
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

    memset(visited_arr, 0, sizeof(visited_arr));
    memset(level_arr, -1, sizeof(level_arr));

    int start_node, end_node;
    cin >> start_node >> end_node;

    BFS(start_node);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << "--------->" << level_arr[i] << endl;
    // }

    cout << level_arr[end_node] << endl;

    return 0;
}

/*
input format :
7 6
0 1
1 3
3 2
1 4
2 5
5 6
0
6
*/