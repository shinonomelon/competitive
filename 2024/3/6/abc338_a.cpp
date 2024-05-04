#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int n = S.size();

  bool ans = true;
  if (S[0] >= 'a' && S[0] <= 'z')
    ans = false;
  for (int i = 1; i < n; i++)
  {
    if (S[i] >= 'A' && S[i] <= 'Z')
      ans = false;
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}