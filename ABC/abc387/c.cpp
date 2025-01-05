#include <bits/stdc++.h>
using namespace std;

/*
  countSnake(X):
    [10, X] に含まれる「ヘビ数」の個数を求める桁DP。

  方針:
    - 数 X を上位桁から下位桁まで配列 digits に格納する。
    - 再帰関数 dp(pos, leading, firstDigit, tight, lengthSoFar) を定義して
      「pos 番目の桁」(0-based: 左端が pos=0) まで決めたときの「ヘビ数」の候補数を数える。
    - 各引数の意味:
      pos         : 現在見ている桁の位置 (0 から digits.size() まで)
      leading     : まだ先頭の非0桁を見つけていないか( true=未確定, false=確定済 )
      firstDigit  : 先頭(非0)桁が確定している場合、その値 (1～9)。未確定時は -1 とする
      tight       : 今まで選んだ桁が X の先頭から pos-1 桁目まで一致しているか
                    (true なら次の桁の上限は digits[pos]、false なら 0～9 自由)
      lengthSoFar : leading が false になってから使われた桁数(先頭桁含む)。 
                    「ヘビ数」は最終的に桁数が 2 以上必要

    - 遷移:
      1) leading=true で digit=0 を選ぶ場合:
         -> leading はそのまま(true)、 firstDigit=-1 のまま、 lengthSoFar=0 のまま
      2) leading=true で digit=d (>0) を選ぶ場合:
         -> leading=false に移行し、 firstDigit=d をセット、 lengthSoFar=1 にする
      3) leading=false のとき:
         -> 選ぶ桁は 0～(firstDigit-1) まで。もし firstDigit 以下を選んだら「ヘビ数」の定義を満たさなくなるので無効。
            (「先頭桁が他の桁より真に大きい」という条件なので、次桁は必ず firstDigit より小さい必要がある)
         -> lengthSoFar を +1 する

    - pos == digits.size() に達したら:
       lengthSoFar >= 2 なら「ヘビ数」1 個確定、そうでなければ 0

    - 最終的に countSnake(R) - countSnake(L-1) を出力する。
      ただし、L<=9 の場合は countSnake(L-1) を 0 扱いすればよい(ヘビ数は 10 以上なので)。

    - 実装注意:
      10^18 は最大 19 桁。 DP の状態数は
        pos(最大19) * leading(2) * firstDigit(10通り+α) * tight(2) * lengthSoFar(最大19ぐらい)
      程度で、十分メモ化再帰で解ける。
*/

static const long long INF = (long long)(1e18);

// メモ用のテーブル: dp[pos][leading][firstDigit][tight][lengthSoFar]
long long dp[20][2][11][2][20];
// -1 初期化で「未計算」を表す
bool used[20][2][11][2][20];

// digits を先頭から見たとき pos 番目を処理する
// leading: まだ先頭非ゼロ桁に到達していないか
// firstDigit: 見つけた先頭桁(1～9)。未確定なら -1
// tight: これまでの桁が X と完全一致か(次の桁の上限が digits[pos] になるか)
// lengthSoFar: 先頭桁を決めてからの桁数
long long rec(const vector<int> &digits, int pos, bool leading, int firstDigit,
              bool tight, int lengthSoFar) {
    // 終端
    if (pos == (int)digits.size()) {
        // 最低2桁以上になっていればOK
        return (lengthSoFar >= 2) ? 1LL : 0LL;
    }

    if (used[pos][leading][firstDigit+1][tight][lengthSoFar]) {
        return dp[pos][leading][firstDigit+1][tight][lengthSoFar];
    }
    used[pos][leading][firstDigit+1][tight][lengthSoFar] = true;

    long long res = 0;
    int limit = tight ? digits[pos] : 9;

    for (int dig = 0; dig <= limit; dig++) {
        // 次の tight
        bool nxtTight = (tight && (dig == limit));

        if (leading) {
            // まだ先頭非0桁に到達していない状態
            if (dig == 0) {
                // leading のまま進む
                res += rec(digits, pos+1, true, -1, nxtTight, 0);
            } else {
                // ここで先頭桁が dig に決まる
                // lengthSoFar = 1 にする
                res += rec(digits, pos+1, false, dig, nxtTight, 1);
            }
        } else {
            // 先頭桁は確定している
            // 「ヘビ数」条件: 以降の桁は firstDigit より小さくないといけない(厳密に小さい)
            if (dig < firstDigit) {
                // lengthSoFar + 1
                res += rec(digits, pos+1, false, firstDigit, nxtTight, lengthSoFar+1);
            }
            // dig >= firstDigit は不許可(真に大きい必要があるので)
        }
    }

    dp[pos][leading][firstDigit+1][tight][lengthSoFar] = res;
    return res;
}

// X 以下のヘビ数の個数 (ただし [10, X] の範囲でカウント)
long long countSnake(long long X) {
    // 10 未満に対しては 0 個を返す
    if (X < 10) return 0LL;

    // X を桁配列に落とす (上位桁 -> digits[0])
    vector<int> digits;
    {
        long long tmp = X;
        while (tmp > 0) {
            digits.push_back(tmp % 10);
            tmp /= 10;
        }
        reverse(digits.begin(), digits.end());
    }

    // dp配列の初期化
    memset(used, false, sizeof(used));

    // 再帰的に数える
    return rec(digits, 0, true, -1, true, 0);
}

int main(){
    long long L, R;
    cin >> L >> R;

    // 答え = countSnake(R) - countSnake(L-1)
    // L-1 が 9 未満のときは自動的に 0 個扱いできるように max(L-1, 0) などで調整
    long long ans = countSnake(R) - countSnake(L-1);
    cout << ans << "\n";

    return 0;
}
