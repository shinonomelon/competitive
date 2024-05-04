#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string words[4] = {"dream", "dreamer", "erase", "eraser"};
  for (int i = 0; i < 4; i++)
    reverse(words[i].begin(), words[i].end());

  string S;
  cin >> S;

  bool ans = true;

  reverse(S.begin(), S.end());

  for (int i = 0; i < S.size();)
  {
    bool canDevided = false;
    for (int j = 0; j < 4; j++)
    {
      if (S.substr(i, words[j].size()) == words[j])
      {
        canDevided = true;
        i += words[j].size();
      }
    }
    if (!canDevided)
    {
      ans = false;
      break;
    }
  }
  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}