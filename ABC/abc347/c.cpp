#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> D(N + 10);
    bool judge = true;
    for (int i = 1; i <= N; i++)
    {
        cin >> D[i];
        if (!((D[i] % (A + B)) >= 1 && (D[i] % (A + B)) <= A))
        {
            judge = false;
        }
    }
    if (judge)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}