// N 
// X 
// Y 
// Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    if (X >= Z && Y <= Z || X <= Z && Y >= Z) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

