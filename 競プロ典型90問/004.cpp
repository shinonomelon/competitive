#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 入力
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  for (int i = 0; i < H; ++i)
    for (int j = 0; j < W; ++j)
      cin >> A[i][j];

  // 前処理
  vector<int> col(H, 0); // i 行目の総和
  vector<int> row(W, 0); // j 列目の総和
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      col[i] += A[i][j];
      row[j] += A[i][j];
    }
  }

  // 各マス
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      cout << col[i] + row[j] - A[i][j] << " ";
    }
    cout << endl;
  }
}