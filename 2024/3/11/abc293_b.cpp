#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N + 1);

  for (int i = 1; i <= N; i++)
    cin >> A[i];

  bool X[N];

  for (int i = 1; i <= N; i++)
    X[i] = false;

  for (int i = 1; i <= N; i++)
  {
    if (!X[i])
    {
      X[A[i]] = true;
    }
  }
  int cnt = 0;
  for (int i = 1; i <= N; i++)
  {
    if (!X[i])
      cnt++;
  }
  cout << cnt << endl;

  for (int i = 1; i <= N; i++)
  {
    if (!X[i])
    {
      cout << i;
      if (i != N)
        cout << " ";
    }
  }
  cout << endl;

  return 0;
}
