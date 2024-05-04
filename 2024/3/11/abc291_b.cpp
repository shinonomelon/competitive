#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<double> X(5 * N);
  double total = 0;
  for (int i = 0; i < 5 * N; i++)
  {
    cin >> X[i];
    total += X[i];
  }

  sort(X.begin(), X.end());

  for (int i = 0; i < N; i++)
  {
    double min = X[i];
    double max = X[5 * N - i - 1];
    total -= (max + min);
  }

  cout << total / double(3 * N) << endl;
}
