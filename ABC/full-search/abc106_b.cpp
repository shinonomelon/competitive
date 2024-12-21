// https://atcoder.jp/contests/abc106/tasks/abc106_b

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 1; i <= N; i += 2)
  {
    int cnt = 0;
    for (int j = 1; j <= i; j++)
    {

      if (i % j == 0)
        cnt++;
    }
    if (cnt == 8)
    {
      ans++;
    }
  }
  cout << ans << endl;
}