// 問題文
// X 段重ねの鏡餅 (X≥1) とは、X 枚の円形の餅を縦に積み重ねたものであって、どの餅もその真下の餅より直径が小さい（一番下の餅を除く）もののことです。
// 例えば、直径 10、8、6 センチメートルの餅をこの順に下から積み重ねると 3 段重ねの鏡餅になり、餅を一枚だけ置くと 1 段重ねの鏡餅になります。

// ダックスフンドのルンルンは N 枚の円形の餅を持っていて、そのうち i 枚目の餅の直径は d i センチメートルです。
// これらの餅のうち一部または全部を使って鏡餅を作るとき、最大で何段重ねの鏡餅を作ることができるでしょうか。

// 制約
// 1≤N≤100
// 1≤di≤100
// 入力値はすべて整数である。

#include<iostream>
using namespace std;

//暴力搜索
// int main(){
//     int N;
//     int d[101];
//     cin >> N;
//     for (int i = 0; i < N; i++) cin >> d[i];
//     int count = N;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i+1 ; j < N; j++)
//         {
//             if(d[i] == d[j] && d[i] != -1){
//                 count--; 
//                 d[j] = -1;
//             } 
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// 计数排序
int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];

    int num[110] = {0};  // バケット
    for (int i = 0; i < N; ++i) {
        num[d[i]]++;  // d[i] が 1 個増える
    }

    int res = 0;  // 答えを格納
    for (int i = 1; i <= 100; ++i) {  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
        if (num[i]) {  // 0 より大きかったら
            ++res;
        }
    }
    cout << res << endl;
}

// set
// #include <set>
// int main() {
//     int N;
//     int d[110];
//     cin >> N;
//     for (int i = 0; i < N; ++i) cin >> d[i];

//     set<int> values; // insert するときに重複を取り除いてくれます
//     for (int i = 0; i < N; ++i) {
//         values.insert(d[i]); // 挿入します
//     }

//     // set のサイズを出力します
//     cout << values.size() << endl;
// }