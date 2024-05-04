#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (b - a == 1 && (a % 3 == 1 || a % 3 == 2))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}