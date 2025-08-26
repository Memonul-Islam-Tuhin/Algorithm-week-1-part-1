#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool visited_arr[105][105];
vector<pair<int, int>> v = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void DFS(int start_i, int start_j)
{
    cout << start_i << " " << start_j << endl;
    visited_arr[start_i][start_j] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = start_i + v[i].first;
        cj = start_j + v[i].second;

        if (isValid(ci, cj) && !visited_arr[ci][cj])
        {
            DFS(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int start_i, start_j;
    cin >> start_i >> start_j;

    memset(visited_arr, false, sizeof(visited_arr));

    DFS(start_i, start_j);

    return 0;
}