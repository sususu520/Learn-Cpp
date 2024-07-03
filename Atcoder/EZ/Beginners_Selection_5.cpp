// 問題文
// あなたは、500 円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。 
// これらの硬貨の中から何枚かを選び、合計金額をちょうど X 円にする方法は何通りありますか。
// 同じ種類の硬貨どうしは区別できません。
// 2 通りの硬貨の選び方は、ある種類の硬貨についてその硬貨を選ぶ枚数が異なるとき区別されます。

// 制約
// 0≤A,B,C≤50
// A+B+C≥1
// 50≤X≤20,000
// A,B,C は整数である
// X は 50 の倍数である


//暴力解法
// #include<iostream>
// using namespace std;

// class Solution{
// public:
//     int sum(int A, int B, int C, int X){
//         int count = 0;
//         for(int i = 0; i <= A; i++){
//             for(int j = 0; j <= B; j++){
//                 for (int k = 0; k <= C; k++){
//                     if(500 * i + 100 * j + 50 * k == X){
//                         count++;
//                     }
//                 }
//             }
//         }
//         return count;
//     }
// };

// int main(){
//     Solution solution;
//     int A; int B; int C; int X;
//     cin >> A; cin >> B; cin >> C; cin >> X;
//     cout << solution.sum(A, B, C, X) << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int A; int B; int C; int X;
    cin >> A >> B >> C >> X;
    int count = 0;
    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            for (int k = 0; k <= C; k++)
            {
                if (500 * i + 100 * j + 50 * k == X)
                {
                  count++;  
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}