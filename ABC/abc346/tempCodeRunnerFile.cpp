#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1LL << 60;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<ll> C(N);
  for (int i = 0; i < N; i++)
    cin >> C[i];

  // 良い文字列にするために必要な最小コストを計算
  ll cost_change = INF; // 変更コストの最小値を保持
  for (int i = 0; i < N - 1; i++)
  {
    // 隣接する文字が異なる場合、この位置を変更することを考える
    if (S[i] != S[i + 1])
    {
      cost_change = min(cost_change, C[i]);
      cost_change = min(cost_change, C[i + 1]);
    }
  }

  // 良い文字列にするためのコストを出力
  // 既に良い文字列の場合は0を出力
  if (cost_change == INF)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << cost_change << endl;
  }
}