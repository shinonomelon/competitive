#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long N, K;
  cin >> N >> K;

  long long A[N + 1], B[N + 1];
  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < N; i++)
    cin >> B[i];
  long long diff = 0;
  for (int i = 0; i < N; i++)
  {
    diff += abs(A[i] - B[i]);
  }

  if (K < diff)
    cout << "No" << endl;
  else if (K % 2 != diff % 2)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}