#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, K, A;
  cin >> N >> K >> A;

  if ((K + A - 1) % N == 0)
    cout << N << endl;
  else
    cout << (K + A - 1) % N << endl;
}