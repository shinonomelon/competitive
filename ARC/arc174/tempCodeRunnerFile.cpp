#include <bits/stdc++.h>

using namespace std;

int N, C;
vector<int> A;

int main()
{
  cin >> N >> C;
  A.resize(N);
  long long sum = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    sum += A[i];
  }
  vector<long long> prefix_sum(N + 1, 0);
  for (int i = 0; i < N; i++)
  {
    prefix_sum[i + 1] = prefix_sum[i] + A[i];
  }
  long long max_sum = sum;
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {
      long long temp = sum - (prefix_sum[j + 1] - prefix_sum[i]) + (prefix_sum[j + 1] - prefix_sum[i]) * C;
      max_sum = max(max_sum, temp);
    }
  }
  cout << max_sum << endl;
}
