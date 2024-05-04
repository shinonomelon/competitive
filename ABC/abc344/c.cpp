#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++)
    cin >> a[i];

  int M;
  cin >> M;
  vector<int> b(M);
  for (int i = 0; i < M; i++)
    cin >> b[i];

  int L;
  cin >> L;
  vector<int> c(L);
  for (int i = 0; i < L; i++)
    cin >> c[i];

  int Q;
  cin >> Q;
  vector<int> x(Q);
  for (int i = 0; i < Q; i++)
    cin >> x[i];

  unordered_set<int> ab_sums;
  for (int j = 0; j < N; j++)
  {
    for (int k = 0; k < M; k++)
    {
      ab_sums.insert(a[j] + b[k]);
    }
  }

  for (int i = 0; i < Q; i++)
  {
    string ans = "No";
    for (int l = 0; l < L; l++)
    {
      if (ab_sums.find(x[i] - c[l]) != ab_sums.end())
      {
        ans = "Yes";
        break;
      }
    }
    cout << ans << endl;
  }
}