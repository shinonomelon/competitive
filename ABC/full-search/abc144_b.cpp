// https://atcoder.jp/contests/abc144/tasks/abc144_b

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
  int N;
  cin >> N;
  for (int i = 1; i < 10; i++)
  {
    for (int j = 1; j < 10; j++)
    {
      if (i * j == N)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}