#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

string concat(string a, string b)
{
  return a + b;
}

int main()
{
  int N;
  cin >> N;

  vi data(N);
  for (int i = 0; i < N; i++)
  {
    cin >> data[i];
  }

  for (int i = 0; i < N; i++)
  {
    cout << data[i] << endl;
  }

  // string a = "Hello";
  // string b = "World";
  // auto ab = concat(a, b);
  // cout << ab << endl;

  // vector<int> c = {1, 2, 3};
  // auto d = c;

  // for (auto elem : d)
  // {
  //   cout << elem << endl;
  // }
}