#include <bits/stdc++.h>

using namespace std;

// 回文かどうかを判定する関数
bool check(long long n)
{
  string s = to_string(n);
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

int main()
{
  long long N;
  cin >> N;
  long long ans = 1;

  // iの3乗がN以下である限り繰り返す　 i^3<=N
  for (int i = 1; i * i * i <= N; i++)
    if (check(i * i * i))
      ans = i * i * i;

  cout << ans << endl;
}
