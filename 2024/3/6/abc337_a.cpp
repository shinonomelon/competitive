#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int takahashi = 0;
  int aoki = 0;

  for (int i = 0; i < N; i++)
  {
    int X, Y;
    cin >> X >> Y;
    takahashi += X;
    aoki += Y;
  }

  if (takahashi > aoki)
    cout << "Takahashi" << endl;
  else if (aoki > takahashi)
    cout << "Aoki" << endl;
  else
    cout << "Draw" << endl;
}