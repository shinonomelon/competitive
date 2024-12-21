// https://atcoder.jp/contests/abc122/tasks/abc122_b

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int max_len = 0, current_len = 0;

    for (char c : S)
    {
        if (c == 'A' || c == 'C' || c == 'G' || c == 'T')
        {
            current_len++;
            max_len = max(max_len, current_len);
        }
        else
        {
            current_len = 0;
        }
    }

    cout << max_len << endl;
    return 0;
}