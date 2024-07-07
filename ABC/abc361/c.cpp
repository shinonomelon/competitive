#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int compare(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

int find_min_difference(int *arr, int n, int k)
{
  qsort(arr, n, sizeof(int), compare);

  int min_diff = arr[n - k - 1] - arr[0];

  for (int i = 1; i <= k; i++)
  {
    int diff = arr[n - k - 1 + i] - arr[i];
    if (diff < min_diff)
    {
      min_diff = diff;
    }
  }

  return min_diff;
}

int main()
{
  int N, K;
  cin >> N >> K;

  int A[N];

  for (int i = 0; i < N; i++)
    cin >> A[i];

  int result = find_min_difference(A, N, K);
  cout << result << endl;

  return 0;
}
