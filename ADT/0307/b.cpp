#include <bits/stdc++.h>

using namespace std;

int main()
{
  string S;
  cin >> S;
  int N = S.size();

  if (S[N - 1] == 't')
    cout << "ist" << endl;
  else
    cout << "er" << endl;
}