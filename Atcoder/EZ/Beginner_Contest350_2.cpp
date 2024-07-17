// 問題文
// 英小文字からなる文字列 S と T が与えられます。

// 以下の条件を満たす 
// 1≤c≤w<∣S∣ となる整数の組 c と w が存在するか判定してください。
// ただし、∣S∣ は文字列 S の長さを表します。
// ここで、w は ∣S∣ 未満である必要があることに注意してください。
// ・S を先頭から順に w 文字毎に区切ったとき、長さが c 以上の文字列の c 文字目を順番に連結した文字列が T と一致する制約S と T は英小文字からなる文字列1≤∣T∣ ≤ ∣S∣≤100

// 制約
// S と T は英小文字からなる文字列
// 1≤∣T∣≤ ∣S∣≤100

#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100001], W[100001];
    cin >> N;
    for(int i = 1; i <= N; ++i) cin >> A[i];
    for(int i = 1; i <= N; ++i) cin >> W[i];
    
    int totalWeight = 0;
    for(int i = 1; i <= N; ++i) {
        if (i != A[i]) {
            totalWeight += W[i];
        }
    }
    
    cout << totalWeight << endl;
    return 0;
}

