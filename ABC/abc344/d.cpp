#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  string T;
  cin >> T;
  int N;
  cin >> N;
  int A[N];
  string S[N][N];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    for (int j = 0; j < A[i]; j++)
    {
      cin >> S[i][j];
    }
  }
}