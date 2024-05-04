#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

string S = "wbwbwwbwbwbw";

int main()
{
  for (int i = 0; i < 210; i++)
    S += "wbwbwwbwbwbw";

  int W, B;
  cin >> W >> B;
  int len = W + B;

  for (int i = 0; i < S.size() - len; i++)
  {
    int w_count = 0, b_count = 0;
    for (int j = 0; j < len; j++)
    {
      if (S[i + j] == 'w')
        w_count++;
      else
        b_count++;
    }
    if (w_count == W && b_count == B)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}