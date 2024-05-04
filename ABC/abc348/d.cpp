// https: // atcoder.jp/contests/abc348/tasks/abc348_d

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> road(300);
    for (int i = 0; i < H; i++)
    {
        cin >> road[i];
    }

    int N;
    cin >> N;

    vector<vector<int>> charge(300, vector<int>(300));

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        cin >> charge[a - 1][b - 1];
    }

    vector<vector<int>> dp(300, vector<int>(300));

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (road[i][j] == '#')
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = charge[i][j];
            }
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}