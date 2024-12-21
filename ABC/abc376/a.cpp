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
  {
    cin >> T[i];
  }

  int recieve = T[0];
  int cnt = 1;

  for (int i = 1; i < N; i++)
  {
    if (T[i] - recieve >= C)
    {
      recieve = T[i];
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
