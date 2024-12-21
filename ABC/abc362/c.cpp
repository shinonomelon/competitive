#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> L(N), R(N), X(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> L[i] >> R[i];
  }

  for (int i = 0; i < N; ++i)
  {
    X[i] = (L[i] + R[i]) / 2;
  }

  long long sum = 0;
  for (int i = 0; i < N; ++i)
  {
    sum += X[i];
  }

  for (int i = 0; sum != 0 && i < N; ++i)
  {
    long long diff;
    if (sum > 0)
    {
      diff = max(L[i] - X[i], -sum);
    }
    else
    {
      diff = min(R[i] - X[i], -sum);
    }

    X[i] += diff;
    sum += diff;
  }

  if (sum == 0)
  {
    cout << "Yes" << endl;
    for (int i = 0; i < N; ++i)
    {
      cout << X[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
