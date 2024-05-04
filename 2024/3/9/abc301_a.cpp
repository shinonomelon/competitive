#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  int takahashi = 0, aoki = 0;

  for (int i = 0; i < N; i++)
  {
    if (S[i] == 'T')
      takahashi++;
    else
      aoki++;
  }

  if (takahashi > aoki)
  {
    cout << "T" << endl;
    return 0;
  }
  else if (aoki > takahashi)
  {
    cout << "A" << endl;
    return 0;
  }

  else
    cout << char('T' + 'A' - S.back()) << endl;

  // takahashi = 0;
  // aoki = 0;

  // for (int i = 0; i < N; i++)
  // {
  //   if (S[i] == 'T')
  //     takahashi++;
  //   else
  //     aoki++;

  //   if (takahashi == N / 2)
  //   {
  //     cout << "T" << endl;
  //     return 0;
  //   }
  //   if (aoki == N / 2)
  //   {
  //     cout << "A" << endl;
  //     return 0;
  //   }
  // }
}