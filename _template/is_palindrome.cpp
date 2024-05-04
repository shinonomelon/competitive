#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
  int n = s.size();
  for (int i = 0; i < n; i++)
    if (s[i] != s[n - i - 1])
      return false;
  return true;
}
