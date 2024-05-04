#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> beans;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (!beans[b])
            beans[b] = a;
        else
            beans[b] = min(beans[b], a);
    }

    int ans = 0;
    for (auto i : beans)
    {
        ans = max(ans, i.second);
    }
    cout << ans << endl;
}