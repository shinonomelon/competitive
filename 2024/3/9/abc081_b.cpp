#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ans = 0;
  while (true)
  {
    bool kareru = true;
    for (int i = 0; i < n; i++)
    {
      if (a[i] % 2 == 0)
        a[i] /= 2;
      else
        kareru = false;
    }
    if (!kareru)
      break;
    ans++;
  }
  cout << ans << endl;
}