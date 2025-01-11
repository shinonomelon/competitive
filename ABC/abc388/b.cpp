#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 1; i <= d; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            ans = max(ans, (p[j].first) * (p[j].second + i));
        }
        cout << ans << endl;
    }
    return 0;
}
