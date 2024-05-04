#include <bits/stdc++.h>
using namespace std;

int main()
{
  // char c = 'A'
  // 65 - 90
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i++)
  {
    char s = S[i];
    if (s >= 65 && s <= 90)
      cout << i + 1 << endl;
  }
}
