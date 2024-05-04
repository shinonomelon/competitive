#include <bits/stdc++.h>
using namespace std;

int main()
{
  unsigned long long ans = 0;
  for (int i = 0; i < 64; i++)
  {
    int n;
    cin >> n;
    ans += (1LL << i) * n; // 二の累乗をビットシフト演算子で計算
  }
  cout << ans << endl;
}