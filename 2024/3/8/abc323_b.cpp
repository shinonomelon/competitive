#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];

  vector<pair<int, int>> a(n);

  for (int i = 0; i < n; i++)
  {
    int win = 0;
    for (int j = 0; j < n; j++)
    {
      if (s[i][j] == 'o')
        win++;
    }
    a[i] = make_pair(-win, i + 1);
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++)
    cout << a[i].second << " \n"[i == n - 1];
}