#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int A[N + 1][N + 1];
  for (int i = 1; i <= N; i++)
    for (int j = 1; j <= N; j++)
      cin >> A[i][j];

  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      if (A[i][j] == 1)
        cout << j << " ";
    }
    cout << endl;
  }
}