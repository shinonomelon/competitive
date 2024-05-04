#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];

  int maxElement = *max_element(A.begin(), A.end());
  int minElement = *min_element(A.begin(), A.end());
  int ans = maxElement - minElement;
  cout << ans << endl;
}
