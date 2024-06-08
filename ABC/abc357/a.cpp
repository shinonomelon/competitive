#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>

#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define REPN(i, m, n) for (int i = m; i < (int)(n); ++i)
#define el '\n'
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define yes cout << "yes" << el
#define no cout << "no" << el

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  int ans = 0;

  REP(i, N)
  {
    int h;
    cin >> h;
    M -= h;
    if (M >= 0)
    {
      ans++;
    }
  }

  cout << ans << el;
  return 0;
}