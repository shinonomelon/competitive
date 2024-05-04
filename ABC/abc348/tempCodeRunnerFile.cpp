// https: // atcoder.jp/contests/abc348/tasks/abc348_d

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(n + 1, vector<int>(2, 0)));
    for (int i = 0; i < n; i++)
    {
        dp[i][i][0] = a[i];
        dp[i][i][1] = 0;
    }

    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i + len - 1 < n; i++)
        {
            int j = i + len - 1;
            if (len % 2 == n % 2)
            {
                dp[i][j][0] = max(dp[i + 1][j][0] + a[i], dp[i][j - 1][0] + a[j]);
                if (dp[i + 1][j][0] + a[i] > dp[i][j - 1][0] + a[j])
                {
                    dp[i][j][1] = dp[i + 1][j][1];
                }
                else
                {
                    dp[i][j][1] = dp[i][j - 1][1];
                }
            }
            else
            {
                if (dp[i + 1][j][1] + a[i] > dp[i][j - 1][1] + a[j])
                {
                    dp[i][j][0] = dp[i + 1][j][0];
                }
                else
                {
                    dp[i][j][0] = dp[i][j - 1][0];
                }
                dp[i][j][1] = max(dp[i + 1][j][1] + a[i], dp[i][j - 1][1] + a[j]);
            }
        }
    }

    cout << dp[0][n - 1][0] << endl;
}