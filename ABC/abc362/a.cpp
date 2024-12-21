#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int R, G, B;
  cin >> R >> G >> B;
  string C;
  cin >> C;
  int pick;
  if (C == "Red")
  {
    pick = min(G, B);
  }
  else if (C == "Green")
  {
    pick = min(R, B);
  }
  else
  {
    pick = min(R, G);
  }

  cout << pick << endl;

  return 0;
}