#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string T)
{
  bool ans = true;
  int N = T.size();
  for (int i = 0; i < N / 2; i++)
    if (T[i] != T[N - i - 1])
      ans = false;
  return ans;
}

int main()
{
  string S;
  cin >> S;

  int ans = 1;
  int N = S.size();

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j <= N; j++)
    {
      string T = "";
      for (int t = i; t < j; t++)
        T += S[t];
      if (is_palindrome(T))
        ans = max(ans, j - i);
    }
  }
  cout << ans << endl;
}