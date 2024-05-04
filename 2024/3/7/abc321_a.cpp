#include <bits/stdc++.h>
using namespace std;

int main()
{
  string N;
  cin >> N;
  string ans = "Yes";

  for (int i = 0; i < N.size() - 1; i++)
  {
    if (int(N[i]) <= int(N[i + 1]))
      ans = "No";
  }
  cout << ans << endl;
}