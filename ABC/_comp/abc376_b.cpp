
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, C;
  cin >> N >> C;

  vector<int> T(N);

  for (int i = 0; i < N; i++)
    cin >> T[i];

  int getTime = T[0];
  int ans = 1;

  for (int i = 1; i < N; i++)
  {
    if (T[i] - getTime >= C)
    {
      ans++;
      getTime = T[i];
    }
  }

  cout << ans << endl;
}