#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  bool isRenzoku = false;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    if (s == "sweet" && isRenzoku && i != n - 1)
    {
      cout << "No" << endl;
      return 0;
    }

    if (s == "sweet")
      isRenzoku = true;
    else
      isRenzoku = false;
  }
  cout << "Yes" << endl;
  return 0;
}