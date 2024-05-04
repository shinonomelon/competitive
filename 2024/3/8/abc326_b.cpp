#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int n;
  cin >> n;

  int ans;
  for (int i = n; i <= 919; i++)
  {
    int a[3];
    int b = i;
    int inc = 0;
    while (inc < 3)
    {
      a[inc] = b % 10;
      b /= 10;
      inc++;
    }
    // cout << a[0] << a[1] << a[2] << endl;
    if (a[0] == a[1] * a[2])
    {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}