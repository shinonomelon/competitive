#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M, P;
  cin >> N >> M >> P;
  if (N < M)
  {
    cout << 0 << endl;
    return 0;
  }
  cout << ((N - M) / P) + 1 << endl;
  return 0;
}