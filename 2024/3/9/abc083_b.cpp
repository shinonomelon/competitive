#include <bits/stdc++.h>
using namespace std;

int ketawa(int n)
{
  int total = 0;
  while (n > 0)
  {
    total += (n % 10);
    n /= 10;
  }
  return total;
}

int main()
{
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  for (int i = 0; i <= n; i++)
  {
    if (ketawa(i) >= a && ketawa(i) <= b)
      ans += i;
  }
  cout << ans << endl;
}