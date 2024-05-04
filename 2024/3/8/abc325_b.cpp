#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int n;
  cin >> n;
  int w[n], x[n];
  for (int i = 0; i < n; i++)
    cin >> w[i] >> x[i];
  int ans = 0;
  for (int i = 0; i <= 23; i++)
  {
    int total = 0;
    for (int j = 0; j < n; j++)
    {
      int work = (i + x[j]) % 24;
      if (work >= 9 && work <= 17)
        total += w[j];
    }
    ans = max(ans, total);
  }
  cout << ans << endl;
}