#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  map<int, int> cnt;
  for (auto a : A)
  {
    if (cnt.count(a))
    {
      cnt[a]++;
    }
    else
    {
      cnt[a] = 1;
    }
  }

  int max_cnt = 0;
  int ans = -1;

  for (auto a : A)
  {
    if (max_cnt < cnt[a])
    {
      max_cnt = cnt[a];
      ans = a;
    }
  }
  cout << ans << " " << max_cnt << endl;
}