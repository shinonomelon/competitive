#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> A(N + 1);
  for (int i = 1; i <= N; ++i)
  {
    cin >> A[i];
  }

  vector<vector<int>> adj(N + 1);
  vector<vector<int>> weights(N + 1);

  for (int i = 0; i < M; ++i)
  {
    int U, V, B;
    cin >> U >> V >> B;
    adj[U].push_back(V);
    weights[U].push_back(B);
    adj[V].push_back(U);
    weights[V].push_back(B);
  }

  const long long INF = 1e18;
  vector<long long> dist(N + 1, INF);
  dist[1] = A[1];

  vector<bool> inQueue(N + 1, false);
  queue<int> q;
  q.push(1);
  inQueue[1] = true;

  while (!q.empty())
  {
    int curr = q.front();
    q.pop();
    inQueue[curr] = false;

    for (size_t i = 0; i < adj[curr].size(); ++i)
    {
      int next = adj[curr][i];
      int weight = weights[curr][i];
      long long newDist = dist[curr] + weight + A[next];
      if (newDist < dist[next])
      {
        dist[next] = newDist;
        if (!inQueue[next])
        {
          q.push(next);
          inQueue[next] = true;
        }
      }
    }
  }

  for (int i = 2; i <= N; ++i)
  {
    cout << dist[i] << " ";
  }
  cout << endl;

  return 0;
}
