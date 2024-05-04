#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool ans = false;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'x')
    {
      ans = false;
      break;
    }
    if (s[i] == 'o')
      ans = true;
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}