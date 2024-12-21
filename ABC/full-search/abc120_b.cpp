// https://atcoder.jp/contests/abc120/tasks/abc120_b

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int A, B, K;
  cin >> A >> B >> K;
  int cnt = 0;
  for (int i = 100; i > 0; i--)
  {

    if (A % i == 0 && B % i == 0)
    {
      cnt++;
    }
    if (cnt == K)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}