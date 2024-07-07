#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int N, A;
  cin >> N >> A;

  int time = 0;

  for (int i = 0; i < N; i++)
  {
    int t;
    cin >> t;
    if (time > t)
    {
      time += A;
    }
    else
    {
      time = t + A;
    }
    cout << time << endl;
  }

  return 0;
}