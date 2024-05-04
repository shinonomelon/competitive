#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int n = S.size();
  for (int i = 0; i < n - 1; i++)
  {
    cout << S[i] << " ";
  }
  cout << S[n - 1] << endl;
}