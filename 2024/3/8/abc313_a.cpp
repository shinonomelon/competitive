#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a1;
  cin >> a1;
  int ans = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int a;
    cin >> a;
    if (a >= a1)
      ans = max(ans, a - a1 + 1);
  }
  cout << ans << endl;
}