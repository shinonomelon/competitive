// https://atcoder.jp/contests/abc095/tasks/arc096_a

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  int ans = 0;

  if (A + B > 2 * C)
  {
    if (X == Y)
      ans = 2 * C * X;
    else if (X > Y)
    {
      ans = 2 * C * Y + min(A, 2 * C) * (X - Y);
    }
    else
    {
      ans = 2 * C * X + min(B, 2 * C) * (Y - X);
    }
  }
  else
  {
    ans = A * X + B * Y;
  }
  cout << ans << endl;
}