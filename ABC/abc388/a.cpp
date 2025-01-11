#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // UPC
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s[0] << "UPC" << endl;
    return 0;
}
