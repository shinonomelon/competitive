#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
    cin >> A.at(i);

  // バブルソートで数列を並び替える
  for (int i = 0; i < N; i++)
  {
    for (int j = N - 1; j > i; j--)
    {
      if (A[j] < A[j - 1])
      {
        // Aのj番目とj-1番目を入れ替える
        swap(A[j], A[j - 1]);
        cout 
      }
    }
  }

  // 結果を出力
  for (int i = 0; i < N; i++)
  {
    cout << A[i] << (i < N - 1 ? ' ' : '\n');
  }

  return 0;
}