#include <bits/stdc++.h>
using namespace std;

int keta(int n)
{
  int keta = 0;
  while (n > 0)
  {
    n /= 10;
    keta++;
  }
  return keta;
}

int main()
{
  int n;
  cin >> n;
  int hiku = 1;
  for (int i = 0; i < (keta(n) - 3); i++)
  {
    hiku *= 10;
  }
  n -= (n % hiku);
  cout << n << endl;
}