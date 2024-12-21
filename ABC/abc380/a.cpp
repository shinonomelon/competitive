#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if (s[0] == '1' && s[1] == '2' && s[2] == '2' && s[3] == '3' && s[4] == '3' && s[5] == '3')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
