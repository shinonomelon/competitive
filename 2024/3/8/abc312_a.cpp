#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  // ACE、BDF、CEG、DFA、EGB、FAC、GBD
  cin >> S;
  if (S == "ACE" || S == "BDF" || S == "CEG" || S == "DFA" || S == "EGB" || S == "FAC" || S == "GBD")
    cout << "Yes";
  else
    cout << "No";
}