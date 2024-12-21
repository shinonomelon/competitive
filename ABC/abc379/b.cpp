#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;

  int ans = 0;
  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    // XO
    if (s[i] == 'O')
      cnt++;
    else
      cnt = 0;

    if (cnt == k)
    {
      ans++;
      cnt = 0;
    }
  }
  cout << ans << endl;
  return 0;
}
