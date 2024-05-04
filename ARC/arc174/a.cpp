#include <iostream>
#include <vector>
using namespace std;

long long max_sum_after_multiplication(int N, vector<int> &A, int C)
{
  long long original_sum = 0;
  for (int i = 0; i < N; ++i)
  {
    original_sum += A[i];
  }

  long long max_diff = 0;
  long long current_diff = 0;

  for (int a : A)
  {
    long long diff = (long long)a * C - a;
    current_diff = max(diff, current_diff + diff);
    max_diff = max(max_diff, current_diff);
  }

  long long final_sum = original_sum + max_diff;
  return final_sum;
}

int main()
{
  int N, C;
  cin >> N >> C;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  cout << max_sum_after_multiplication(N, A, C) << endl;
  return 0;
}
