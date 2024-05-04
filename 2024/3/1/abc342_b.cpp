#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int P[n];

  for (int i = 0; i < n; i++)
    cin >> P[i];

  int Q[n + 1];
  for (int i = 0; i < n; i++)
    Q[P[i]] = i;

  int q;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int a, b;
    cin >> a >> b;
    if (Q[a] < Q[b])
      cout << a << endl;
    else
      cout << b << endl;
  }
}
