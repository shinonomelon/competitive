#include <bits/stdc++.h>
using namespace std;

int main()
{
  // and, not, that, the, you
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string w;
    cin >> w;
    if (w == "and" || w == "not" || w == "that" || w == "the" || w == "you")
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}