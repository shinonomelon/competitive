#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;
  long long ans;
  ans = pow(A, B) + pow(B, A);
  cout << ans << endl;
}