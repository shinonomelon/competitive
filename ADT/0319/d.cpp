#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> deg(N + 1);

  for (int i = 1; i <= M; i++)
  {
    int a, b;
    cin >> a >> b;
    deg[b]++;
  }
  int ans = -1;

  for (int i = 1; i <= N; i++)
  {
    if (deg[i] == 0)
    {
      if (ans != -1)
      {
        cout << -1 << endl;
        return 0;
      }
      else
      {
        ans = i;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
