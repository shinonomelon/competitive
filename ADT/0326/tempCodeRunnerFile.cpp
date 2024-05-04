#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  for (int i = 0; i < 8; i++)
  {
    string S;
    cin >> S;
    for (int j = 0; j < 8; j++)
    {
      if (S[j] == '*')
      {
        char row, col;
        row = 'a' + j;
        col = 8 - i;
        cout << row << col << endl;
        return 0;
      }
    }
  }
  return 0;
}