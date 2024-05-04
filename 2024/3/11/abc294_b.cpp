#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  int A[H][W];
  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++)
      cin >> A[i][j];

  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (A[i][j] == 0)
        cout << ".";
      else
      {
        char c = 'A' + A[i][j] - 1;
        cout << c;
      }
    }
    cout << endl;
  }
}
