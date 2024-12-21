#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string X;
  cin >> X;
  int n = X.size();
  int i = 0;
  while (X[n - 1 - i] == '0')
  {
    X.pop_back();
    i++;
  }
  int m = X.size();
  if (X[m - 1] == '.')
  {
    X.pop_back();
  }
  cout << X << endl;

  return 0;
}