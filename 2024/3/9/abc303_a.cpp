#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  string S, T;
  cin >> N;
  cin >> S >> T;

  for (int i = 0; i < N; i++)
  {
    char s = S[i];
    char t = T[i];
    bool yes = s == t || (s == '1' && t == 'l') || (t == '1' && s == 'l') || s == '0' && t == 'o' || t == '0' && s == 'o';
    if (!yes)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}