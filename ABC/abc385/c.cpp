#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> H(N);
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }

    vector<vector<int>> height_map(3001);
    for(int i = 0; i < N; i++){
        int h = H[i];
        height_map[h].push_back(i);
    }

    int global_max = 1;

    for(int h = 1; h <= 3000; h++){
        const vector<int> &positions = height_map[h];
        int m = (int)positions.size();
        if(m <= 1){
            continue;
        }
        vector<vector<int>> dp(m, vector<int>(N + 1, 0));

        int local_max = 1;

        for(int j = 0; j < m; j++){
            for(int i = 0; i < j; i++){
                int d = positions[j] - positions[i];
                if(d <= 0 || d > N) {

                    continue;
                }

                if(dp[i][d] > 0){
                    dp[j][d] = dp[i][d] + 1;
                } else {
                    dp[j][d] = 2;
                }

                if(dp[j][d] > local_max){
                    local_max = dp[j][d];
                }
            }
        }

        if(local_max > global_max){
            global_max = local_max;
        }
    }


    cout << global_max << endl;

    return 0;
}
