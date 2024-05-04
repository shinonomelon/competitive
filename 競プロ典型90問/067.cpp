// https://atcoder.jp/contests/typical90/tasks/typical90_bo

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string eightToNine(string N)
{
  ll eighttonine = 0;

  // 8進数から10進数への変換
  for (int i = 0; i < N.size(); i++)
  {
    eighttonine = eighttonine * 8 + (N[i] - '0');
  }

  // 10進数から9進数への変換
  string ans = "";
  do
  {
    ll digit = eighttonine % 9;
    if (digit == 8)
      ans = "5" + ans;
    else
      ans = to_string(digit) + ans;
    eighttonine /= 9;
  } while (eighttonine > 0);

  return ans.empty() ? "0" : ans;
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