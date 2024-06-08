#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int N, M, K;
  cin >> N >> M >> K;

  vector<vector<int>> key(M, vector<int>(N, 0));
  vector<string> r(M);

  for (int i = 0; i < M; i++)
  {
    int c;
    cin >> c;
    for (int j = 0; j < c; j++)
    {
      int a;
      cin >> a;
      key[i][a - 1] = 1;
    }
    cin >> r[i];
  }

  int res = 0;
  for (int i = 0; i < (1 << N); i++)
  {
    vector<int> tf(N);
    for (int j = 0; j < N; j++)
    {
      if (i & (1 << j))
      {
        tf[j] = 1;
      }
      else
      {
        tf[j] = 0;
      }
    }
    bool jud = true;
    for (int j = 0; j < M; j++)
    {
      int ck = 0;
      for (int p = 0; p < N; p++)
      {
        if (key[j][p] == 1 && tf[p] == 1)
        {
          ck++;
        }
      }
      if (ck >= K && r[j] == "x")
      {
        jud = false;
      }
      if (ck < K && r[j] == "o")
      {
        jud = false;
      }
    }
    if (jud)
    {
      res++;
    }
  }
  cout << res << "\n";
  return 0;
}