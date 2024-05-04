#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, S, K;
  cin >> N >> S >> K;

  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    int P, Q;
    cin >> P >> Q;
    sum += P * Q;
  }

  if (sum >= S)
    cout << sum << endl;
  else
    cout << sum + K << endl;
}