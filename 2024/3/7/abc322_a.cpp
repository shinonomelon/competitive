#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;
  int ans = -1;
  for (int i = 0; i < N - 2; i++)
  {
    if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
    {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
}