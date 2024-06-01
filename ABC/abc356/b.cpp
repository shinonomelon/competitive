#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  vector<int> X(M);
  for (int i = 0; i < M; i++)
  {

    cin >> A[i];
    X[i] = 0;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      int x;
      cin >> x;
      X[j] += x;
    }
  }
  bool flag = false;

  for (int i = 0; i < M; i++)
  {
    if (A[i] > X[i])
      flag = true;
  }

  if (flag)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}