#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare_participants(const pair<int, string> &a, const pair<int, string> &b)
{
  if (a.first != b.first)
  {
    return a.first > b.first;
  }
  return a.second < b.second;
}

int main()
{

  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  int scores[5] = {a, b, c, d, e};
  char problems[5] = {'A', 'B', 'C', 'D', 'E'};

  vector<pair<int, string>> participants;

  for (int mask = 1; mask < (1 << 5); mask++)
  {
    int total_score = 0;
    string name = "";
    for (int i = 0; i < 5; i++)
    {
      if (mask & (1 << i))
      {
        total_score += scores[i];
        name += problems[i];
      }
    }
    participants.push_back(make_pair(total_score, name));
  }

  sort(participants.begin(), participants.end(), compare_participants);

  for (int i = 0; i < participants.size(); i++)
  {
    cout << participants[i].second << endl;
  }

  return 0;
}
