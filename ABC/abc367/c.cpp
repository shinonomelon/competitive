#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void findSequences(int N, int K, const vector<int> &R)
{
  vector<int> seq(N, 1);

  while (true)
  {
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
      sum += seq[i];
    }

    if (sum % K == 0)
    {
      for (int i = 0; i < N; i++)
      {
        cout << seq[i] << " ";
      }
      cout << endl;
    }

    int index = N - 1;
    while (index >= 0 && seq[index] == R[index])
    {
      index--;
    }

    if (index < 0)
      break;

    seq[index]++;
    for (int i = index + 1; i < N; i++)
    {
      seq[i] = 1;
    }
  }
}

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> R(N);

  for (int i = 0; i < N; i++)
  {
    cin >> R[i];
  }

  vector<int> seq(N, 1);

  while (true)
  {
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
      sum += seq[i];
    }

    if (sum % K == 0)
    {
      for (int i = 0; i < N; i++)
      {
        cout << seq[i] << " ";
      }
      cout << endl;
    }

    int index = N - 1;
    while (index >= 0 && seq[index] == R[index])
    {
      index--;
    }

    if (index < 0)
      break;

    seq[index]++;
    for (int i = index + 1; i < N; i++)
    {
      seq[i] = 1;
    }
  }

  return 0;
}
