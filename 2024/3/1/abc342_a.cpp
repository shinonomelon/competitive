#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int N = S.size();

  for (int i = 0; i < N; i++)
  {
    bool ans = true;
    for (int j = 0; j < N; j++)
    {
      if (i != j && S[i] == S[j])
        ans = false;
    }
    if (ans)
      cout << i + 1 << endl;
  }
}