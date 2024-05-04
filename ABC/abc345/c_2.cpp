#include <bits/stdc++.h>

using namespace std;

long long c2(long long n)
{
  return n * (n - 1) / 2;
}

int main()
{
  string S;
  cin >> S;
  int N = S.size();

  long long same = 0;
  map<char, int> cnt;

  for (auto c : S)
    cnt[c]++;

  // 各文字が何回出現したかに基づいて、同じ文字から2つ選ぶ組み合わせの総数を計算している
  for (auto p : cnt)
  {
    same += c2(p.second);
  }
  long long diff = c2(N) - same;

  long long ans = diff;

  if (same)
    ans++;
  cout << ans << endl;
}
