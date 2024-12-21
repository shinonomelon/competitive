#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int x_a, x_b, x_c;
  int y_a, y_b, y_c;
  cin >> x_a >> y_a;
  cin >> x_b >> y_b;
  cin >> x_c >> y_c;

  int l_ab = (x_a - x_b) * (x_a - x_b) + (y_a - y_b) * (y_a - y_b);
  int l_bc = (x_b - x_c) * (x_b - x_c) + (y_b - y_c) * (y_b - y_c);
  int l_ca = (x_c - x_a) * (x_c - x_a) + (y_c - y_a) * (y_c - y_a);

  if (l_ab + l_bc == l_ca || l_bc + l_ca == l_ab || l_ca + l_ab == l_bc)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}