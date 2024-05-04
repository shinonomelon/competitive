#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i++)
  {
    char c = S[i] - 32;
    cout << c;
  }
  cout << endl;
}
