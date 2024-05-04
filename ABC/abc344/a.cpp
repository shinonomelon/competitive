#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  int len = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '|')
      len++;
    if ((len == 0 || len == 2) && s[i] != '|')
    {
      cout << s[i];
      if (i == n - 1)
        cout << endl;
    }
  }
}