#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    map<char, int> count;

    for (int i = 0; i < S.size(); i++)
    {
        count[S[i]]++;
    }

    map<int, int> ans;

    for (auto c : count)
    {
        ans[c.second]++;
    }

    for (auto a : ans)
    {
        if (!(a.second == 0 || a.second == 2))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}