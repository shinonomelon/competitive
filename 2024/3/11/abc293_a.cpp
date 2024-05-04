#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int N = S.size();
  string ans = "";
  for (int i = 0; i < N / 2; i++)
  {
    ans += S[2 * i + 1];
    ans += S[2 * i];
  }
  cout << ans << endl;
}
