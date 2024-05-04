#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int N = S.size();
  for (int i = 0; i < N; i++)
  {
    if (S[i] != 'a' && S[i] != 'i' && S[i] != 'u' && S[i] != 'e' && S[i] != 'o')
      cout << S[i] << endl;
  }
  return 0;
}