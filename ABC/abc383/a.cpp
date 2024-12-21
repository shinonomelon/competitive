#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int now = 0;
  int result = 0;
  for (int i = 0; i < N; i++)
  {
    int T, V;
    cin >> T >> V;
    if (result > 0)
    {
      result = max(0, result - (T - now));
    }
    now = T;
    result += V;
  }
  cout << result << endl;
}