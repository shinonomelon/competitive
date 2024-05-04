#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  string S;
  // ACE、BDF、CEG、DFA、EGB、FAC、GBD
  cin >> N >> S;

  bool a = false, b = false, c = false;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == 'A')
      a = true;
    else if (S[i] == 'B')
      b = true;
    else if (S[i] == 'C')
      c = true;
    if (a && b && c)
    {
      cout << i + 1 << endl;
      break;
    }
  }
}