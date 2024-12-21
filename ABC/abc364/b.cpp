#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;

  int sx, sy;
  cin >> sx >> sy;

  vector<vector<char>> C(H, vector<char>(W));

  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++)
      cin >> C[i][j];

  string X;
  cin >> X;

  for (int i = 0, n = X.size(); i < n; i++)
  {
    if (X[i] == 'U' && sx - 2 >= 0 && C[sx - 2][sy - 1] == '.')
      sx--;
    else if (X[i] == 'D' && sx < H && C[sx][sy - 1] == '.')
      sx++;
    else if (X[i] == 'L' && sy - 2 >= 0 && C[sx - 1][sy - 2] == '.')
      sy--;
    else if (X[i] == 'R' && sy < W && C[sx - 1][sy] == '.')
      sy++;
  }

  cout << sx << " " << sy << endl;

  return 0;
}