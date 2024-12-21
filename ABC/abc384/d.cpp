#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  long long N, S;
  cin >> N >> S;

  vector<long long> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  long long sumA = 0;
  for (int i = 0; i < N; i++)
    sumA += A[i];

  if (sumA == 0)
  {
    if (S == 0)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
    return 0;
  }

  if (sumA == S)
  {
    cout << "Yes" << endl;
    return 0;
  }

  if (sumA > S)
  {
    vector<long long> A_dbl = A;
    A_dbl.insert(A_dbl.end(), A.begin(), A.end());

    long long current_sum = 0;
    int left = 0;
    bool found = false;

    for (int right = 0; right < 2 * N; right++)
    {
      current_sum += A_dbl[right];
      while (current_sum > S && left <= right)
      {
        current_sum -= A_dbl[left];
        left++;
      }
      if (current_sum == S)
      {
        found = true;
        break;
      }
    }

    if (found)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
    return 0;
  }

  long long q = S / sumA;
  long long r = S % sumA;

  if (r == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }

  vector<long long> A_dbl = A;
  A_dbl.insert(A_dbl.end(), A.begin(), A.end());

  long long current_sum = 0;
  int left = 0;
  bool found = false;

  for (int right = 0; right < 2 * N; right++)
  {
    current_sum += A_dbl[right];
    while (current_sum > r && left <= right)
    {
      current_sum -= A_dbl[left];
      left++;
    }
    if (current_sum == r)
    {
      found = true;
      break;
    }
  }

  if (found)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
