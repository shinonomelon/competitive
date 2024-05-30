// N 
// X 
// Y 
// Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int first;
    cin >> first;
    for (int i = 1;i < N;i++) {
        int H;
        cin >> H;
        if (first < H) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1<< endl;
    return 0;
}

