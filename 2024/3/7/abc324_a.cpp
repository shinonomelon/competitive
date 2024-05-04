#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int A[N];
  string ans = "Yes";
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    if (i != 0 && A[i - 1] != A[i])
      ans = "No";
  }
  cout << ans << endl;
}