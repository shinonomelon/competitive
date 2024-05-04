#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    int A;
    cin >> A;
    if (A <= X)
      ans += A;
  }
  cout << ans << endl;
}