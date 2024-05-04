#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  bool side[120][120];
  for (int i = 1; i <= N; i++)
    for (int j = 1; j <= N; j++)
      side[i][j] = false;

  for (int i = 1; i <= M; i++)
  {
    int u, v;
    cin >> u >> v;
    side[u][v] = true;
  }
  int ans = 0;
  for (int i = 1; i <= N - 2; i++)
  {
    for (int j = i + 1; j <= N - 1; j++)
    {
      for (int k = j + 1; k <= N; k++)
      {
        if (side[i][j] && side[j][k] && side[i][k])
          ans++;
      }
    }
  }
  cout << ans << endl;
}