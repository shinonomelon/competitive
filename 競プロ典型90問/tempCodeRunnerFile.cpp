// https://atcoder.jp/contests/typical90/tasks/typical90_bo

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string eightToNine(string N)
{
  ll eighttonine = 0;

  for (ll i = 0; i < N.size(); i++)
  {
    eighttonine += (ll)(N[N.size() - 1 - i] - '0') * pow(8, i);
  }

  string ans = "";
  if (eighttonine == 0)
    ans = "0";

  while (eighttonine > 0)
  {
    ll amari = eighttonine % 9;
    if (amari == 8)
      ans = "5" + ans;
    else
      ans = to_string(amari) + ans;
    eighttonine /= 9;
  }

  return ans;
}

int main()
{
  string N;
  int K;
  cin >> N >> K;
  for (int i = 0; i < K; i++)
  {
    N = eightToNine(N);
  }
  cout << N << endl;
}