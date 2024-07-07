#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;
  int s_size = s.size();
  int t_size = t.size();

  for (int w = 1; w < s_size; w++)
  {
    for (int c = 0; c < w; c++)
    {
      string u = "";

      for (int i = c; i < s_size; i += w)
      {
        u += s[i];
      }
      // cout << "t:" << t << " " << "u:" << u << endl;
      // cout << "w:" << w << "c:" << c << endl;
      if (u == t)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;

  return 0;
}