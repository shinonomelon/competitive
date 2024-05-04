#include <bits/stdc++.h>
using namespace std;

int main()
{
  int X, Y;
  cin >> X >> Y;
  if (0 <= X - Y && X - Y <= 3)
    cout << "Yes" << endl;
  else if (X - Y > 3)
    cout << "No" << endl;
  else if (-2 <= X - Y && X - Y < 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}