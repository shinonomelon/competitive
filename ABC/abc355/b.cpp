#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  for (int i = 0; i < N; ++i)
    cin >> A[i];
  for (int i = 0; i < M; ++i)
    cin >> B[i];

  vector<int> C = A;
  for (int i = 0; i < M; ++i)
    C.push_back(B[i]);

  sort(C.begin(), C.end());

  set<int> st(A.begin(), A.end());

  for (int i = 0; i < N + M - 1; ++i)
  {
    if (st.count(C[i]) && st.count(C[i + 1]))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
