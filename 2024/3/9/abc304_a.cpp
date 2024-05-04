#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  string s[n];
  int a[n];

  int startNum = 1000000000;
  int startA = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> s[i] >> a[i];
    if (a[i] < startNum)
    {
      startNum = a[i];
      startA = i;
    }
  }

  for (int i = 0; i < n; i++)
  {
    int bajo = (startA + i) % n;
    cout << s[bajo] << endl;
  }
}