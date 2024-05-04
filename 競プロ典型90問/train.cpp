#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int N, M;
  cin >> N >> M;
  vector<int> train(N);

  for (int i = 0; i < N; i++)
    train[i] = 1;

  for (int i = 0; i < M; i++)
  {
    int x, y;
    cin >> x >> y;

    train[x - 1] += train[y - 1];
    train[y - 1] = 0;
  }

  cout << train[0] << endl;
  return 0;
}
