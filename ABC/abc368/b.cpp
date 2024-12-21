#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  int ans = 0;
  while (true)
  {
    ans++;
    sort(A.rbegin(), A.rend());
    A[0]--;
    A[1]--;

    int judge = 0;
    for (int i = 0; i < N; i++)
    {
      if (A[i] > 0)
      {
        judge++;
      }
    }

    if (judge <= 1)
    {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}