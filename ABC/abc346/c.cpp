#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;

int main()
{
  ll N, K;
  cin >> N >> K;
  map<ll, bool> A;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    A[a] = true;
  }
  ll ans = (K + 1) * K / 2;
  for (auto a : A)
  {
    if (a.second && a.first <= K)
      ans -= a.first;
  }
  cout << ans << endl;
}