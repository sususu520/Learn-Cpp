// 問題文
// 1 から N の番号がついた N 個の箱と 1 から N の番号がついた N 個の荷物があります。
// 荷物 i (1≤i≤N) は箱 A i​  の中にあり、重さは W i​  です。
// あなたは荷物を一つ選び、他の箱の中に移動させる操作を 0 回以上繰り返し行うことができます。
// 1 回の操作で移動させる荷物の重さが w であるとき、w のコストがかかります。
// 全ての箱に荷物が 1 つずつ入っている状態にするためにかかるコストの総和の最小値を求めてください。

// 制約
// 1≤N≤10 ^5
// 1≤A i​ ≤N (1≤i≤N)
// 1≤W i​ ≤10 ^4(1≤i≤N)
// 入力はすべて整数

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