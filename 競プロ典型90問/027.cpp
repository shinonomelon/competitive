#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<string, bool> users;

  for (int i = 1; i <= N; i++)
  {
    string s;
    cin >> s;
    if (!users[s])
    {
      users[s] = true;
      cout << i << endl;
    }
  }

  // for (auto u : users)
  // cout << u.second << endl;
}