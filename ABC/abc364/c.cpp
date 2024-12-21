#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  long long N;
  long long X, Y;
  cin >> N >> X >> Y;

  vector<long long> A(N);
  vector<long long> B(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < N; i++)
    cin >> B[i];

  sort(A.rbegin(), A.rend());
  sort(B.rbegin(), B.rend());

  long long sumA = 0;
  long long ansA = N; // 初期値をNに設定
  long long sumB = 0;
  long long ansB = N; // 初期値をNに設定

  for (int i = 0; i < N; i++)
  {
    sumA += A[i];
    if (sumA > X)
    {
      ansA = i + 1; // インデックスを1から始める
      break;
    }
  }

  for (int i = 0; i < N; i++)
  {
    sumB += B[i];
    if (sumB > Y)
    {
      ansB = i + 1; // インデックスを1から始める
      break;
    }
  }

  long long ans = min(ansA, ansB);

  long long final_ans = min(ans, N);

  cout << final_ans << endl;

  return 0;
}