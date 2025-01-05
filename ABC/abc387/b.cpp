#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x;
    cin >> x;

    int ans = 0;
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            ans += i * j;
        }
    }

    for (int i = 1; i <= 9; i++){
        if (x % i == 0 && x / i <= 9){
            ans -= x;
        }
    }
    cout << ans << endl;
    return 0;
}
