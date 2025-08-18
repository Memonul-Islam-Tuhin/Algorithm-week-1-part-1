#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<pair<int, int>> edgeList;

    edgeList.push_back({1, 2});
    edgeList.push_back({1, 3});
    edgeList.push_back({2, 4});
    edgeList.push_back({3, 5});
    edgeList.push_back({4, 6});
    edgeList.push_back({5, 6});

    cout << "Edge List : " << endl;

    for (auto edge : edgeList)
    {
        cout << edge.first << " " << edge.second << endl;
    }

    return 0;
}