#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    long long ans = 0;

    int j = 0;
    for (int i = 0; i < N; i++)
    {
        while (j < N && A[j] < 2 * A[i])
        {
            j++;
        }
        ans += (N - j);
    }

    cout << ans << endl;
    return 0;
}
