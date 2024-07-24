// 問題文
// 数直線上に 1 から N の番号がつけられた N 匹の蟻がいます。 
// 蟻 i (1≤i≤N) ははじめ座標 X i  にいて、正負どちらかの方向を向いています。はじめに全ての蟻は相異なる座標にいます。
// 各蟻が向いている方向は長さ N の 01 文字列 S で表され、S i​  が 0 のとき蟻 i は負の方向を向いており、 1 のとき蟻 i は正の方向を向いています。

// 現在を時刻 0 とし、時刻 (T+0.1) までの (T+0.1) 単位時間にわたって、N 匹の蟻がそれぞれの向いている方向に向かって単位時間あたり 1 の速さで移動します。 
// 複数の蟻が同じ座標に到達すると、それらの蟻はすれ違い、方向や速度を変えずに通り過ぎます。 
// (T+0.1) 単位時間が経過したとき、すべての蟻は停止します。

// 1≤i<j≤N を満たし、今から時刻 (T+0.1) までに蟻 i と蟻 j がすれ違う整数の組 (i,j) の個数を求めてください。

// 制約
// 2≤N≤2×10 ^5
// 1≤T≤10 ^9
 
// S は 0 と 1 からなる長さ N の文字列
// −10 ^9 ≤X i​ ≤10 ^9(1≤i≤N)
// X i​ !=X j (1≤i<j≤N)
// Ni,Ti,Xi(1≤i≤N) は整数

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

// 暴力搜索，O（N^2）
// int main(){
//     int N, T;
//     string S;
//     int X[200001];
//     cin >> N >> T >> S;
//     for (int i = 0; i < N; i++) cin >> X[i];

//     int NumofPass = 0;
//     for (int i = 0; i < N; i++)
//     {   
//         if (S[i] == '1')
//         {    
//             for (int j = i + 1; j < N; j++)
//             {
//                 if (S[j] == '0' && X[i] + 2 * T >= X[j])
//                 {
//                     NumofPass += 1;
//                 }
                
//             }

//         }
        
//     }
    
//     cout << NumofPass << endl;
//     return 0;
    
// }


// 双指针方法，O（NlogN）

int main() {
    long long N, T;
    string S;

    // 输入N、T和S
    cin >> N >> T >> S;
    
    // 确保在知道N的值后初始化X
    vector<long long> X(N);
    
    // 输入X数组
    for (long long i = 0; i < N; i++) {
        cin >> X[i];
    }

    vector<long long> rightAnts;
    vector<long long> leftAnts;

    // 将蚂蚁分为向右走和向左走的两个数组
    for (long long i = 0; i < N; i++) {
        if (S[i] == '0') {
            rightAnts.push_back(X[i]);
        } else {
            leftAnts.push_back(X[i]);
        }
    }

    // 对两个数组进行排序
    sort(rightAnts.begin(), rightAnts.end());
    sort(leftAnts.begin(), leftAnts.end());

    long long NumofPass = 0;

    // 计算通过的蚂蚁对数
    for (long long i = 0; i < leftAnts.size(); i++) {
        // 寻找第一个大于等于leftAnts[i]的位置
        auto p1 = lower_bound(rightAnts.begin(), rightAnts.end(), leftAnts[i]);
        // 寻找第一个大于leftAnts[i] + 2 * T的位置
        auto p2 = upper_bound(rightAnts.begin(), rightAnts.end(), leftAnts[i] + 2 * T);
        // 计算区间内的蚂蚁对数
        NumofPass += p2 - p1;
    }

    // 输出结果
    cout << NumofPass << endl;

    return 0;
}
