#include <bits/stdc++.h>

using namespace std;

const long long INF = 1LL << 60;

template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return 1;
  }
  return 0;
}

template <class T>
inline bool chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return 1;
  }
  return 0;
}

int main()
{
  int N;
  cin >> N;
  long long h[N];
  for (int i = 0; i < N; i++)
    cin >> h[i];

  long long dp[N];
  for (int i = 0; i < N; i++)
    dp[i] = INF;
  dp[0] = 0;

  for (int i = 1; i < N; i++)
  {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if (i > 1)
      chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
  }
  cout << dp[N - 1] << endl;
}