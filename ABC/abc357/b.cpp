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
  string S;
  cin >> S;
  string S2 = S;

  int small, large;
  small = 0;
  large = 0;

  REP(i, S.size())
  {
    int c = S[i] - 'A';
    if (c >= 0 && c <= 25)
    {
      small++;
    }
    else
    {
      large++;
    }
  }

  if (small > large)
  {
    REP(i, S.size())
    {
      S2[i] = toupper(S[i]);
    }
  }
  else
  {
    REP(i, S.size())
    {
      S2[i] = tolower(S[i]);
    }
  }

  cout << S2 << el;
  return 0;
}