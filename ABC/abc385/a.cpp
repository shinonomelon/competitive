#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  if ((A == B && B == C) || (A + B == C) || (A + C == B) || (B + C == A))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}