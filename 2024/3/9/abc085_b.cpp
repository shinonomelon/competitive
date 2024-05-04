#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int n;
  cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++)
    cin >> d[i];

  sort(d.rbegin(), d.rend());

  int ans = 1;
  int now = d[0];

  for (int i = 1; i < n; i++)
  {
    if (now > d[i])
    {
      now = d[i];
      ans++;
    }
  }
  cout << ans << endl;
}