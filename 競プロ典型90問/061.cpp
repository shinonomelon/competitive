// https://atcoder.jp/contests/typical90/tasks/typical90_bi

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int Q;
  cin >> Q;
  vector<int> X;

  for (int i = 0; i < Q; i++)
  {
    int t, x;
    cin >> t >> x;
    if (t == 1)
      X.insert(X.begin(), x);
    else if (t == 2)
      X.push_back(x);
    else
      cout << X[x - 1] << endl;
  }
}