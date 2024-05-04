#include <bits/stdc++.h>
using namespace std;

int N, L, K;
vector<long long> A;

bool solve(int M)
{
  // 長さM以上でK+1個以上に分割できるかを判定する
  int cut_count = 0;
  int prev = 0;             // 現在のピースの長さ
  int total_cut_length = 0; // 切り分けられたピースの合計の長さ

  for (int i = 1; i <= N; i++)
  {
    prev += A[i] - A[i - 1];
    if (prev >= M)
    {
      cut_count += 1;
      total_cut_length += prev;
      prev = 0;
    }
  }

  if (cut_count > K || ((cut_count == K) && ((L - total_cut_length) >= M)))
    return true;

  return false;
}

int main()
{
  // 入力
  cin >> N >> L >> K;
  A.resize((N + 1), 0);
  for (int i = 1; i <= N; i++)
    cin >> A[i];

  // 二分探索
  int left = -1, right = L + 1;

  while ((right - left) > 1)
  {
    int mid = (left + right) / 2;
    if (solve(mid))
      left = mid;
    else
      right = mid;
  }

  // 出力
  cout << left << endl;

    return 0;
}
