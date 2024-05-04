#include <bits/stdc++.h>

using namespace std;

int main()
{
  string S;
  cin >> S;
  int N = S.size();
  if (S[0] != '<' || S[N - 1] != '>')
  {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 1; i < N - 1; i++)
  {
    if (S[i] != '=')
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}