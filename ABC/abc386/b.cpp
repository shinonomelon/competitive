#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    // 00, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    string S;
    cin >> S;
    int ans = 0;
    int N = S.size();
    for(int i = N-1; i >=0; i--){
        if(S[i] == '0' && S[i-1] == '0'){
            ans++;
            i--;
        } else {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

