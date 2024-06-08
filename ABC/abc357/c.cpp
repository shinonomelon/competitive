#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define el '\n'

using namespace std;

void fillPattern(char **pattern, int size, int x, int y, int level)
{
  if (level == 0)
    return;

  int newSize = size / 3;

  for (int i = x + newSize; i < x + 2 * newSize; ++i)
  {
    for (int j = y + newSize; j < y + 2 * newSize; ++j)
    {
      pattern[i][j] = '.';
    }
  }

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      if (i != 1 || j != 1)
      {
        fillPattern(pattern, newSize, x + i * newSize, y + j * newSize, level - 1);
      }
    }
  }
}

int main()
{
  int N;
  cin >> N;

  if (N == 0)
  {
    cout << '#' << el;
    return 0;
  }

  int size = pow(3, N);
  char **pattern = new char *[size];
  for (int i = 0; i < size; ++i)
  {
    pattern[i] = new char[size];
    for (int j = 0; j < size; ++j)
    {
      pattern[i][j] = '#';
    }
  }

  fillPattern(pattern, size, 0, 0, N);

  REP(i, size)
  {
    REP(j, size)
    {
      cout << pattern[i][j];
    }
    cout << el;
  }

  for (int i = 0; i < size; ++i)
  {
    delete[] pattern[i];
  }
  delete[] pattern;

  return 0;
}
