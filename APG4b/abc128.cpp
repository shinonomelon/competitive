#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<pair<string, int>, int>> restaurant(N);

  for (int i = 0; i < N; i++)
  {
    string s;
    int p;
    cin >> s >> p;
    restaurant.at(i) = make_pair(make_pair(s, -p), i);
  }

  sort(restaurant.begin(), restaurant.end());

  for (int i = 0; i < N; i++)
  {
    // string s;
    // int p;
    // int index;
    // tie(tie(s, p), index) = restaurant.at(i);
    cout << restaurant[i].first.first << ":" << restaurant[i].first.second << ":" << restaurant[i].second + 1 << endl;
  }
}