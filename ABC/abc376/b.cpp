#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  int L = 1;
  int R = 2;

  int count = 0;
  for (int i = 0; i < Q; i++)
  {
    char H;
    int T;
    cin >> H >> T;

    if (H == 'L')
    {
      // 1 2 L 4 T R 7
      // 1 2 R 4 T L 7
      if ((L < T && T < R) || (R < T && T < L))
      {
        count += abs(L - T);
        L = T;
      }
      // 1 2 L 4 5 R T
      // 1 T R 4 5 L 7
      else if ((L < R && R < T) || (T < R && R < L))
      {
        count += (N - abs(L - T));
        L = T;
      }
      // 1 2 R 4 5 L T
      // 1 T L 4 5 R 7
      else
      {
        count += abs(L - T);
        L = T;
      }
    }
    else if (H == 'R')
    {
      // 1 2 L 4 T R 7
      // 1 2 R 4 T L 7
      if ((L < T && T < R) || (R < T && T < L))
      {
        count += abs(R - T);
        R = T;
      }
      // 1 2 L 4 5 R T
      // 1 T R 4 5 L 7
      else if ((L < R && R < T) || (T < R && R < L))
      {
        count += abs(R - T);
        R = T;
      }
      // 1 2 R 4 5 L T
      // 1 T L 4 5 R 7
      else
      {
        count += (N - abs(R - T));
        R = T;
      }
    }
  }
  cout << count << endl;
}
