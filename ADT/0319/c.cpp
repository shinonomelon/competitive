#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int W[1100];
  int X[1100];
  for (int i = 0; i < N; i++)
    cin >> W[i] >> X[i];

  int ans = 0;
  for (int i = 0; i < 24; i++)
  {
    int total = 0;
    for (int j = 0; j < N; j++)
    {
      int time = (i + X[j]) % 24;
      if (time >= 9 && time < 18)
        total += W[j];
    }
    ans = max(ans, total);
  }
  cout << ans << endl;
}