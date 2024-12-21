#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>

#define ll long long;

const int INF = 1e9;

using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> A(N);
  std::map<std::string, int> salary;

  for (int i = 0; i < N; i++)
    cin >> A[i];

  for (int i = 0; i < N; i++)
  {
    int count = 1;
    for (int j = 0; j < N; j++)
    {
      if (i == j)
        continue;
      if (A[i] < A[j])
      {
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}