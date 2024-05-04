// https://atcoder.jp/contests/typical90/tasks/typical90_bo

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N, M;
  cin >> N >> M;

  map<int, bool> p;

  for (int i = 0; i < M; i++)
  {
    int a, b, temp;
    cin >> a >> b;
    if (a < b)
    {
      temp = b;
      b = a;
      a = temp;
    }

    if (!p[a])
      p[a] = true;
  }

  for (int i = 0; i < N; i++)
  {
    cout << i << ":" << p[i + 1] << endl;
  }
}