#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> A(n);
  for (int i = 0; i < n; i++)
    cin >> A[i];
  int i = 0;
  while (i < n)
  {
    cout << A[i] << " ";
    if (i == k - 1)
    {
      cout << x << " ";
    }
    i++;
  }
  cout << endl;
  return 0;
}