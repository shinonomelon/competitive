#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, D;
  cin >> A >> B >> D;
  for (int i = A; i <= B; i += D)
  {
    if (i != B)
      cout << i << " ";
    else
      cout << i;
  }
  cout << endl;
}