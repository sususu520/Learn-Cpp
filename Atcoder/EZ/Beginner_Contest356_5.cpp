// 配点 : 
// 475 点

// 問題文
// 長さ N の数列 A=(A 1 ,…,A N) が与えられます。
// N-1  N
// ∑    ∑    ⌊ max(A i, A j) / min(A i, A j) ⌋ を求めてください。
// i=1 j=i+1
// ただし、⌊x⌋ は x 以下の最大の整数を表します。
// 例えば、⌊3.14⌋=3、⌊2⌋=2 です。

// 制約
// 2≤N≤2×10^5
// 1≤A i ≤10^6
// 入力は全て整数である

#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;


// 暴力搜索
// int main(){
//     int N;
//     cin >> N;
//     vector<int> A(N+1);
//     for (int i = 0; i < N; i++) cin >> A[i];

//     int sum = 0;
//     for (int i = 0; i < N-1; i++)
//     {
//         for (int j = i+1; j < N; j++)
//         {
//             if (A[i] > A[j]) sum += A[i] / A[j];
//             else sum += A[j] / A[i];
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }


//先排序后整体计算(时间复杂度O(N log N))
int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());
    long long sum = 0;
    for (int i = 0; i < N - 1; i++)
    {
        sum += accumulate(A.begin() + i, A.end(), 0) / A[i];
    }
    cout << sum << endl;
    return 0;
}