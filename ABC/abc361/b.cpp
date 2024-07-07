#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int a, b, c, d, e, f;
  int g, h, i, j, k, l;
  cin >> a >> b >> c >> d >> e >> f;
  cin >> g >> h >> i >> j >> k >> l;

  if ((a == g) || (a < g && g < d) || (g < a && a < j))
  {
    if ((b == h) || (b < h && h < e) || (h < b && b < k))
    {
      if ((c == i) || (c < i && i < f) || (i < c && c < l))
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}