#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  sort(A.begin(), A.end());
  int ans = 0;
  for (int j = 0; j < N; j++)
  {
    bool isSolved = false;
    for (int i = 0; i < N; i++)
    {
      if (A[i] == ans)
      {
        isSolved = true;
      }
    }
    if (isSolved)
      ans++;
  }
  cout << ans << endl;
}