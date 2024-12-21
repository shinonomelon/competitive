#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int H, W, D;
  cin >> H >> W >> D;
  vector<string> grid(H);
  for (int i = 0; i < H; i++)
    cin >> grid[i];

  vector<pair<int, int>> floors;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (grid[i][j] == '.')
        floors.push_back(make_pair(i, j));
    }
  }

  int n = floors.size();

  vector<vector<bool>> humidified(n, vector<bool>(n, false));
  for (int k = 0; k < n; k++)
  {
    for (int l = 0; l < n; l++)
    {
      int dist = abs(floors[k].first - floors[l].first) + abs(floors[k].second - floors[l].second);
      if (dist <= D)
      {
        humidified[k][l] = true;
      }
    }
  }

  int max_count = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      vector<bool> combined(n, false);
      for (int k = 0; k < n; k++)
      {
        if (humidified[i][k] || humidified[j][k])
        {
          combined[k] = true;
        }
      }
      int count = 0;
      for (int k = 0; k < n; k++)
        if (combined[k])
          count++;
      if (count > max_count)
        max_count = count;
    }
  }

  cout << max_count << endl;
}
