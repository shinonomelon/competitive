// 問題
// 高橋君は英小文字からなる文字列 
// S をキーボードで入力しようとしました。

// 高橋君は画面を見ずにキーボードだけを見てタイピングをしていました。

// 誤って別の英小文字を入力してしまったときにはその直後にバックスペースキーを押しましたが、バックスペースキーが壊れていたため誤って入力された文字は消去されず、実際に入力された文字列は文字列 
// T となりました。

// また、英小文字以外のキーを誤って押してしまうことはありませんでした。

// T のうち高橋君が誤って入力した文字でないものを正しく入力された文字であると定めます。

// 正しく入力された文字が 
// T の何文字目であるか答えてください。

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

vector<int> indices;
int index = 0;

for (int i = 0; i < T.size(); i++) {
    if (index < S.size() && S[index] == T[i]) {
        indices.push_back(i + 1);
        index++;
    }
}

if (index == S.size()) {
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    cout << endl;
} else {
    cout << "-1" << endl;
}

return 0;
}
