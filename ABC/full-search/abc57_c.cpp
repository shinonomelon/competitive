// https://atcoder.jp/contests/abc057/tasks/abc057_c

#include <iostream>
#include <string>

using namespace std;
using ll = long long;

int main()
{
  ll N;
  cin >> N;

  ll ans = 10000000000;

  for (ll i = 1; i * i <= N; i++)
  {
    ll judge;
    if (N % i == 0)
    {
      judge = max(i, N / i);
    }
    ans = min(ans, judge);
  }
  cout << to_string(ans).size() << endl;
}