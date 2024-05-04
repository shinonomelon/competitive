#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, int> players;

  for (int i = 1; i <= N; i++)
  {
    string S;
    cin >> S;
    players[i] = 0;
    for (int j = 0; j < N; j++)
    {
      if (S[j] == 'o')
        players[i]++;
    }
  }

  vector<pair<int, int>> sorted_players(players.begin(), players.end());
  sort(sorted_players.begin(), sorted_players.end(), [](const pair<int, int> &a, const pair<int, int> &b)
       { return a.second > b.second; });

  for (auto p : sorted_players)
    cout << p.first << " ";
  cout << endl;
  return 0;
}