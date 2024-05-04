#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int A[7 * n];
  int B[n];
  for (int i = 0; i < n; i++)
  {
    int B = 0;
    for (int j = 0; j < 7; j++)
    {
      int a;
      cin >> a;
      B += a;
    }
    cout << B;
    if (i != n - 1)
      cout << " ";
  }
  cout << endl;
}