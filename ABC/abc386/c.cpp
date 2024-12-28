#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int K;
    cin >> K;
    string S, T;
    cin >> S >> T;

    if(K != 1){
        cout << "No" << endl;
        return 0;
    }

    int lenS = S.size();
    int lenT = T.size();

    if(abs(lenS - lenT) > 1){
        cout << "No" << endl;
        return 0;
    }

    bool result = false;

    if(lenS == lenT){
        int diff = 0;
        for(int i = 0; i < lenS; ++i){
            if(S[i] != T[i]){
                diff++;
                if(diff > 1){
                    break;
                }
            }
        }
        if(diff <= 1){
            result = true;
        }
    }
    else{
        if(lenS > lenT){
            swap(S, T);
            swap(lenS, lenT);
        }
        int indexS = 0, indexT = 0;
        bool foundDifference = false;
        while(indexS < lenS && indexT < lenT){
            if(S[indexS] != T[indexT]){
                if(foundDifference){
                    break;
                }
                foundDifference = true;
                indexT++;
            }
            else{
                indexS++;
                indexT++;
            }
        }

        if(indexS == lenS && indexT == lenT){
            result = true;
        }
        else if(indexS == lenS && indexT == lenT -1){
            result = true;
        }
        else{
            if(indexS == lenS && indexT == lenT){
                result = foundDifference;
            }
            else{
                if(!foundDifference && indexT == lenT -1){
                    result = true;
                }
            }
        }
    }
    if (result){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
