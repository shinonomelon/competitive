#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int alice = 0;
  int bob = 0;

  sort(a.rbegin(), a.rend());

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      alice += a[i];
    else
      bob += a[i];
  }
  cout << alice - bob << endl;
}