#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int count[N + 1];

  for (int i = 1; i <= N; i++)
    count[i] = 0;

  for (int i = 0; i < N - 1; i++)
  {
    int a, b;
    cin >> a >> b;
    count[a]++;
    count[b]++;
  }
  for (int i = 1; i <= N; i++)
    if (count[i] >= N - 1)
    {

      cout << "Yes" << endl;
      return 0;
    }
  cout << "No" << endl;
  return 0;
}