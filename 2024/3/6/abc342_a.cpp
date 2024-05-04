#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int n = S.size();

  for (int i = 0; i < n; i++)
  {
    bool tigau = true;
    for (int j = 0; j < n; j++)
    {
      if (i != j && S[i] == S[j])
        tigau = false;
    }
    if (tigau)
      cout << i + 1 << endl;
  }
}