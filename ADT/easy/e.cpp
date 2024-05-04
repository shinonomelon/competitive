#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long N;
  cin >> N;
  string S = "";
  while (N > 0)
  {
    if (N % 2 == 0)
    {
      S += "B";
      N /= 2;
    }
    else
    {
      S += "A";
      N--;
    }
  }
  for (long long i = 0; i < S.size(); i++)
  {
    cout << S[S.size() - i - 1];
  }
  cout << endl;
}