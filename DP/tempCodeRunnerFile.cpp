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
  int N, K;
  cin >> N >> K;
  vector<long long> h(N);
  for (int i = 0; i < N; i++)
    cin >> h[i];

  vector<long long> dp(N);
  for (int i = 0; i < N; i++)
    dp[i] = INF;

  dp[0] = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 1; j <= K; ++j)
    {
      chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
    }
  }
  cout << dp[N - 1] << endl;
}
