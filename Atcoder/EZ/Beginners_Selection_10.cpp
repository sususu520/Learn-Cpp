// 問題文

// 英小文字からなる文字列 S が与えられます。 
// Tが空文字列である状態から始め、以下の操作を好きな回数繰り返すことで S=T とすることができるか判定してください。

// T の末尾に dream dreamer erase eraser のいずれかを追加する。
// 制約

// 1≦∣S∣≦10^5
 
// S は英小文字からなる。


// 需要额外内存

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string S, T, result;
    cin >> S;
    reverse(S.begin(), S.end());
    while (S.size() >= 5)
    {
        if (S.substr(0, 7) == "remaerd")
        {
            S = S.erase(0, 7);
        }
        else if (S.substr(0, 6) == "resare")
        {
            S = S.erase(0, 6);
        }
        else if (S.substr(0, 5) == "esare" || S.substr(0, 5) == "maerd")
        {
            S = S.erase(0, 5);
        }
        else break;
    }
    if(S.empty()) result = "YES";
    else result = "NO";
    cout << result << endl;
    return 0;
}


// 不需要额外内存

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// string divide[4] = {"dream", "dreamer", "erase", "eraser"};

// int main() {
//     string S;
//     cin >> S;

//     // 後ろから解くかわりにすべての文字列を「左右反転」する
//     reverse(S.begin(), S.end());
//     for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

//     // 端から切っていく
//     bool can = true;
//     for (int i = 0; i < S.size();) {
//         bool can2 = false; // 4 個の文字列たちどれかで divide できるか
//         for (int j = 0; j < 4; ++j) {
//             string d = divide[j];
//             if (S.substr(i, d.size()) == d) { // d で divide できるか
//                 can2 = true;
//                 i += d.size(); // divide できたら i を進める
//             }
//         }
//         if (!can2) { // divide できなかったら
//             can = false;
//             break;
//         }
//     }

//     if (can) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }
