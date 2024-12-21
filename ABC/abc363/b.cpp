#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int n, t, p;
  cin >> n >> t >> p;
  vector<int> L(n);
  for (int i = 0; i < n; i++)
  {
    cin >> L[i];
  }

  int sum = 0;
  while (true)
  {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (L[i] >= t)
      {
        count++;
      }
      L[i]++;
    }
    if (count >= p)
    {
      break;
    }
    sum++;
  }
  cout << sum << endl;

  return 0;
}