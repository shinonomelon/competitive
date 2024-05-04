#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  string S;
  cin >> N >> K;
  cin >> S;
  int pass = 0;

  for (int i = 0; i < N; i++)
  {
    if (pass < K)
    {
      if (S[i] == 'o')
      {
        cout << 'o';
        pass++;
      }
      else
      {
        cout << 'x';
      }
    }
    else
    {
      cout << 'x';
    }
  }
  cout << endl;
}
