#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int week = A + B;
    vector<int> D(N + 10);
    int l = 1100000000;
    int r = -1;
    for (int i = 1; i <= N; i++)
    {
        cin >> D[i];
        D[i] %= week;
        r = max(r, D[i]);
        l = min(l, D[i]);
    }

    for (int today = 0; today < week; today++)
    {
        if ((r + today) % week <= A && (l + today) % week <= A)
        {
            cout << "Yes" << endl;

            return 0;
        }
    }
    cout << "No" << endl;
}
