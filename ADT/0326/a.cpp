#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N;
  string S;
  cin >> N;
  cin >> S;

  for (int i = 0; i < N - 2; i++)
  {
    if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}