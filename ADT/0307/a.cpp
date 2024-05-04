#include <bits/stdc++.h>

using namespace std;

int main()
{
  string S;
  cin >> S;
  // bool isLowercase = islower(ch);
  for (int i = 0, n = S.size(); i < n; i++)
  {
    if ((i == 0 && islower(S[i])) || i != 0 && !islower(S[i]))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}