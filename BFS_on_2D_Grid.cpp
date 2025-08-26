#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool visited_arr[105][105];
int level[105][105];

vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }

    return true;
}

void BFS(int si, int sj)
{

    queue<pair<int, int>> que;
    que.push({si, sj});
    visited_arr[si][sj] = true;
    level[si][sj] = 0;

    while (!que.empty())
    {

        pair<int, int> parent = que.front();
        que.pop();

        int x = parent.first;
        int y = parent.second;

        for (int i = 0; i < 4; i++)
        {
            int parent_i = x + direction[i].first;
            int parent_j = y + direction[i].second;

            if (isValid(parent_i, parent_j) && !visited_arr[parent_i][parent_j] && grid[parent_i][parent_j] == '.')
            {
                que.push({parent_i, parent_j});
                visited_arr[parent_i][parent_j] = true;
                level[parent_i][parent_j] = level[x][y] + 1;
            }
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

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(visited_arr, false, sizeof(visited_arr));
    memset(level, -1, sizeof(level));

    BFS(si, sj);

    cout << level[di][dj] << endl;

    return 0;
}