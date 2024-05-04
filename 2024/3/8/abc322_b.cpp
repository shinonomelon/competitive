#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  string S, T;
  cin >> N >> M;
  cin >> S;
  cin >> T;

  bool atama = true;
  bool oshiri = true;
  for (int i = 0; i < N; i++)
  {
    if (S[i] != T[i])
    {
      // 接頭語ではない
      atama = false;
    }
    if (S[N - 1 - i] != T[M - 1 - i])
    {
      oshiri = false;
    }
  }
  if (atama && oshiri)
    cout << 0;
  else if (atama && !oshiri)
    cout << 1;
  else if (!atama && oshiri)
    cout << 2;
  else
    cout << 3;
  cout << endl;
}