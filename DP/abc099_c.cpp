#include <iostream>
using namespace std;

const int MAX_N = 110000;

int memo[MAX_N]; // memo[i] が i についての答え

int rec(int n)
{
  if (n == 0)
    return 0; // 終端条件
  if (memo[n] != -1)
    return memo[n]; // すでに探索済みならリターン

  int res = n; // INF の気持ち

  // 1, 6, 6^2, ..., を試す (n を超えない範囲で)
  for (int pow6 = 1; pow6 <= n; pow6 *= 6)
    res = min(res, rec(n - pow6) + 1);

  // 1, 9, 9^2, ..., を試す (n を超えない範囲で)
  for (int pow9 = 1; pow9 <= n; pow9 *= 9)
    res = min(res, rec(n - pow9) + 1);

  // メモしながらリターン
  return memo[n] = res;
}

int main()
{
  int N;
  cin >> N;

  // テーブルを -1 で初期化
  for (int i = 0; i < MAX_N; ++i)
    memo[i] = -1;
  cout << rec(N) << endl;
}
