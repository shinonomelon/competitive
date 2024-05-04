#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<long long> oneStudents(N + 1, 0), twoStudents(N + 1, 0);

  for (int i = 1; i <= N; i++)
  {
    int c, p;
    cin >> c >> p;
    oneStudents[i] = oneStudents[i - 1];
    twoStudents[i] = twoStudents[i - 1];
    if (c == 1)
    {
      oneStudents[i] += p;
    }
    else
    {
      twoStudents[i] += p;
    }
  }

  int Q;
  cin >> Q;

  for (int i = 0; i < Q; i++)
  {
    int L, R;
    cin >> L >> R;
    long long oneAns = oneStudents[R] - oneStudents[L - 1];
    long long twoAns = twoStudents[R] - twoStudents[L - 1];
    cout << oneAns << " " << twoAns << endl;
  }
}