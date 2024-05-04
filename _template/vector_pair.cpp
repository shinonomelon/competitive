#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec;
  vec.push_back(2);
  vec.push_back(7);
  vec.push_back(0);
  vec.push_back(3);
  vec.push_back(5);
  vec.push_back(1);
  vec.push_back(4);
  vec.push_back(6);
  vec.push_back(9);
  vec.push_back(8);
  typedef pair<int, int> pair;
  vector<pair> pair_vec;

  for (int i = 0; i < vec.size(); ++i)
    pair_vec.push_back(pair(i, vec[i]));

  for (auto &i : pair_vec)
    cout << i.first << " " << i.second << endl;
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); i++)
    cout << pair_vec[i].second << endl;
  return 0;
}