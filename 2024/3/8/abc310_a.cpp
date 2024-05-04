#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, P, Q;
  cin >> N >> P >> Q;
  int ans = P;
  for (int i = 0; i < N; i++)
  {
    int D;
    cin >> D;
    ans = min(ans, Q + D);
  }
  cout << ans << endl;
}