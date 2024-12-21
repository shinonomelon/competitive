#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> H(N);
  for (int i = 0; i < N; i++)
  {
    cin >> H[i];
  }

  int maxH = *max_element(H.begin(), H.end());
  int T = 1;

  // 最大の高さを基準に全体を処理
  for (int t = 1; t <= maxH; t++)
  {
    for (int i = 0; i < N; i++)
    {
      if (H[i] > 0)
      {
        if (T % 3 == 2) // 3の倍数の時に3を引く
        {
          H[i] = max(H[i] - 3, 0);
        }
        else
        {
          H[i]--;
        }
        T++;
      }
    }
  }

  cout << T << endl;
  return 0;
}
