#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int ans;
  for (int i = 0; i < N; i++)
  {
    int C;
    cin >> C;
    if (C == A + B)
      ans = i + 1;
  }
  cout << ans << endl;
  return 0;
}