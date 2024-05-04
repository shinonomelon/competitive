#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    int idx = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] - 32 == T[idx] - 0)
            idx++;
        if (idx == 3)
        {
            break;
        }
    }

    if (idx == 3)
        cout << "Yes" << endl;
    else if (idx == 2 && T[T.size() - 1] == 'X')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}