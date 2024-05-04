#include <bits/stdc++.h>
using namespace std;

int main()
{
  // pair<string, int> p("abc", 1);

  // cout << p.first << ":" << p.second << endl;
  // p.first = "hello";
  // cout << p.first << ":" << p.second << endl;

  pair<string, int> p;
  p = make_pair("*", 1);

  string s;
  int a;

  tie(s, a) = p;
  cout << s << endl; // *
  cout << a << endl; // 1
  return 0;
}