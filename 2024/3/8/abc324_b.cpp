#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll n;
  cin >> n;
  while (n > 1)
  {
    if (n % 3 == 0)
      n /= 3;
    else if (n % 2 == 0)
      n /= 2;
    else if ((n % 2 != 0) && (n % 3 != 0))
      break;
  }
  if (n == 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}