#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

int main()
{
  int N;
  cin >> N;
  vi a(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }

  for (int i = 1; i < N; i++)
  {
    cout << a[i - 1] * a[i];
    if (i != N - 1)
    {
      cout << " ";
    }
  }
  cout << endl;
}