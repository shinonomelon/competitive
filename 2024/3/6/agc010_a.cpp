#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  long long sum = 0;
  for (int i = 0; i < N; i++)
  {
    long long a;
    cin >> a;
    sum += a;
  }
  if (sum % 2 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}