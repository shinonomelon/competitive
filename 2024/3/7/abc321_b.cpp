#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  int l = 100, r = 0, score = 0;
  for (int i = 0; i < N - 1; i++)
  {
    int A;
    cin >> A;
    l = min(l, A);
    r = max(r, A);
    score += A;
  }

  if (score - r >= X)
  {
    cout << "0" << endl;
    return 0;
  }

  int need = X - (score - r - l);
  if (need <= r)
  {
    cout << need << endl;
    return 0;
  }
  cout << "-1" << endl;
  return 0;
}