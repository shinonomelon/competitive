#include <iostream>
#include <vector>
#include <climits>
#include <bitset>

using namespace std;

int minVisit(int N, int M, vector<string> &stores)
{
  vector<bitset<20>> storePopcorns(N); // 20はMの最大値を想定
  bitset<20> allPopcorns;

  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < M; ++j)
    {
      if (stores[i][j] == 'o')
      {
        storePopcorns[i].set(j);
        allPopcorns.set(j);
      }
    }
  }

  int minStores = INT_MAX;

  int totalCombinations = 1 << N;

  for (int i = 1; i < totalCombinations; ++i)
  {
    bitset<20> currentPopcorns;
    int storeCount = 0;

    for (int j = 0; j < N; ++j)
    {
      if (i & (1 << j))
      {
        currentPopcorns |= storePopcorns[j];
        ++storeCount;
      }
    }

    if (currentPopcorns == allPopcorns)
    {
      minStores = min(minStores, storeCount);
    }
  }

  return minStores;
}

int main()
{
  int N, M;
  cin >> N >> M;

  vector<string> stores(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> stores[i];
  }

  int ans = minVisit(N, M, stores);
  cout << ans << endl;

  return 0;
}