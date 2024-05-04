// https://atcoder.jp/contests/typical90/tasks/typical90_ag

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<long long> A(N + 1);

  for (int i = 0; i < N; i++)
    cin >> A.at(i);

  long long ans = 0;

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        for (int l = k + 1; l < N; l++)
        {
          for (int m = l + 1; m < N; m++)
          {
            // cout << i << ":" << j << ":" << k << ":" << l << ":" << m << endl;
            if (A[i] % P * A[j] % P * A[k] % P * A[l] % P * A[m] % P == Q)
              ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
}