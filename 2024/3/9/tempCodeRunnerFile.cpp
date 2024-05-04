#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int n;
  ll y;
  cin >> n >> y;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; i + j < n; j++)
    {
      int k = n - i - j;
      if (10000 * i + 5000 * j + 1000 * k == y)
      {

        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }

  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}