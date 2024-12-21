// https://atcoder.jp/contests/abc136/tasks/abc136_b

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i < N + 1; i++)
  {
    if (1 <= i && i < 10)
      ans++;
    else if (100 <= i && i < 1000)
      ans++;
    else if (10000 <= i && i < 100000)
      ans++;
  }
  cout << ans << endl;
}