#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n;
  cin >> s;
  bool ans = true;
  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
      ans = false;
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}