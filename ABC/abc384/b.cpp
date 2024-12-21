#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  int N, R;
  cin >> N >> R;
  // D1 1600-2799
  // D2 1200-2399

  for (int i = 0; i < N; i++)
  {
    int D, A;
    cin >> D >> A;
    if (D == 1)
    {
      if (R >= 1600 && R <= 2799)
      {
        R += A;
      }
    }
    else
    {
      if (R >= 1200 && R <= 2399)
      {
        R += A;
      }
    }
  };

  cout << R << endl;
}