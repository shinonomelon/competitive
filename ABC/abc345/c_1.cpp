#include <bits/stdc++.h>

using namespace std;

int main()
{
  string S;
  cin >> S;
  long long N = S.size();

  sort(S.begin(), S.end());

  long long count = 1;
  long long ans = 0;
  bool same = false;

  for (long long i = 1; i < N; i++)
  {
    if (S[i] != S[i - 1])
    {
      ans += count * (N - i);
      count = 1;
    }
    else
    {
      same = true;
      count++;
    }
  }
  if (same)
    ans++;
  cout << ans << endl;
}