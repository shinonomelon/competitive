#include <iostream>
#include <algorithm>

#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define REPN(i, m, n) for (int i = m; i < (int)(n); ++i)

using namespace std;

int main()
{
  int n, p, q;
  cin >> n >> p >> q;
  REP(i, n)
  {
    int d = 0;
    cin >> d;
    d += q;
    p = min(p, d);
  }

  cout << p << endl;

  return 0;
}