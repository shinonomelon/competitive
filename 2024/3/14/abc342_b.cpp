#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int P[110];
  for (int i = 1; i <= N; i++)
    cin >> P[i];
  int Q[110];
  for (int i = 1; i <= N; i++)
    Q[P[i]] = i;
  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int a, b;
    cin >> a >> b;
    if (Q[a] < Q[b])
      cout << a << endl;
    else
      cout << b << endl;
  }
}
