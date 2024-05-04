#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long X;
  cin >> X;

  // cout << X / 10 << endl;
  if (X % 10 == 0 || X < 0)
    cout << X / 10 << endl;
  else
    cout << X / 10 + 1 << endl;
}