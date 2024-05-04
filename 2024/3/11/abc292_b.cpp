#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  int X[N];
  for (int i = 0; i < N; i++)
    X[i] = 0;

  for (int i = 0; i < Q; i++)
  {
    int e, x;
    cin >> e >> x;
    if (e == 1)
    {
      X[x - 1]++;
    }
    else if (e == 2)
    {
      X[x - 1] += 2;
    }
    else if (e == 3)
    {
      if (X[x - 1] >= 2)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }

  return 0;
}
