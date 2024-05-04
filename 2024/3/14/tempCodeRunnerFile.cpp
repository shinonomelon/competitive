#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> P(N + 1);
  for (int i = 1; i <= N; i++)
    cin >> P[i];
  int Q;
  cin >> Q;
  vector<pair<int, int>> queries(Q);
  for (int i = 0; i < Q; i++)
    cin >> queries[i].first >> queries[i].second;

  unordered_map<int, int> position;
  for (int i = 1; i <= N; i++)
    position[P[i]] = i;

  for (int i = 0; i < Q; i++)
  {
    if (position.find(queries[i].first) != position.end())
    {
      cout << queries[i].first << endl;
    }
    else if (position.find(queries[i].second) != position.end())
    {
      cout << queries[i].second << endl;
    }
  }
}
