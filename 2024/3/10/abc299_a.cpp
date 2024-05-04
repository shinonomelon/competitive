#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  // * |
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '|')
      cnt++;
    if (cnt == 1 && s[i] == '*')
    {
      cout << "in" << endl;
      return 0;
    }
  }
  cout << "out" << endl;
}