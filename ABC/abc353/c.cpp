#include <iostream>
#include <vector>
using namespace std;

const int MOD = 100000000;

vector< vector<int> > memo;

int f(int a, int b) {
    if (memo[a][b] != -1) {
        return memo[a][b];
    }
    memo[a][b] = (a + b) % MOD;
    return memo[a][b];
}

int calculate_sum(vector<int>& A) {
    int N = A.size();
    memo.assign(N, vector<int>(N, -1));
    
    int sum = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            sum = (sum + f(A[i], A[j])) % MOD;
        }
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int result = calculate_sum(A);
    cout << result << endl;
    
    return 0;
}