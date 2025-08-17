#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num = 6;

    int adj_mat[6][6] = {0};

    adj_mat[0][1] = 1;
    adj_mat[1][0] = 1;
    adj_mat[0][2] = 1;
    adj_mat[2][0] = 1;
    adj_mat[1][3] = 1;
    adj_mat[3][1] = 1;
    adj_mat[2][3] = 1;
    adj_mat[3][2] = 1;
    adj_mat[3][4] = 1;
    adj_mat[4][3] = 1;
    adj_mat[4][5] = 1;
    adj_mat[5][4] = 1;

    cout << "Adjacency Matrix : " << endl;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
                                                 -----------------------Memonul Islam Tuhin--------------------------
