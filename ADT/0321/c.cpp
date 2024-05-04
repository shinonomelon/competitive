#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, W;
  cin >> N >> W;
  int A[1100000];
  for (int i = 0; i < N; i++)
    cin >> A[i];

  vector<int> flag(1100000);

  for (int i = 0; i < N; i++)
  {
    if (A[i] <= W)
      flag[A[i]] = 1;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      if (A[i] + A[j] <= W)
        flag[A[i] + A[j]] = 1;
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        if (A[i] + A[j] + A[k] <= W)
          flag[A[i] + A[j] + A[k]] = 1;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < 1100000; i++)
  {
    if (flag[i] == 1)
      ans++;
  }
  cout << ans << endl;
}