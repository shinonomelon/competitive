#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int t[110000], x[110000], y[110000];
  t[0] = 0;
  x[0] = 0;
  y[0] = 0;

  for (int i = 0; i < N; i++)
    cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
  bool ans = true;
  for (int i = 0; i < N; i++)
  {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if (dt < dist)
    {
      ans = false;
    }
    if (dist % 2 != dt % 2)
    {
      ans = false;
    }
  }
  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}