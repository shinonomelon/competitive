#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  vector<ll> a(110);
  int n = 0;
  while (true)
  {
    cin >> a[n];
    if (a[n] == 0)
      break;
    n++;
  }

  for (int i = n; i >= 0; i--)
    cout << a[i] << endl;
}