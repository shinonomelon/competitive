
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i<N; i++) cin >> A[i];

    int ans = 0;
    int passenger = 0;

    passenger += A[0];
    ans++;

    for (int i = 1; i < N; i++) {
        if (passenger + A[i] <= K) {
            passenger += A[i];
        } else {
            passenger = A[i];
            ans++;
        }
    }

    cout << ans << endl;
}
