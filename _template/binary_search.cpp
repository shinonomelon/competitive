#include <bits/stdc++.h>

using namespace std;

int binary_search(int n)
{
}

int main()
{
  int N, X;
  cin >> N >> X;

  int L = 0, R = N - 1;

  int A[N];
  for (int i = 0; i < N; i++)
    cin >> A[i];

  int M;

  while (L <= R)
  {
    M = (L + R) / 2;
    if (X > A[M])
      L = M + 1;
    else if (X < A[M])
      R = M - 1;
    else
      break;
  }
  cout << M + 1 << endl;
}