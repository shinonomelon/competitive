#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >>  N;

  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.push_back(a);
  }
}