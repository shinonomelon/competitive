#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int N = S.size();
  string ans = "Yes";
  for (int i = 0; i < 16; i++)
  {
    if (i % 2 == 1 && S[i] != '0')
      ans = "No";
  }
  cout << ans << endl;
}