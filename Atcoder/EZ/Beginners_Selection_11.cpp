// 問題文
// シカのAtCoDeerくんは二次元平面上で旅行をしようとしています。 
// AtCoDeerくんの旅行プランでは、時刻 0 に 点 (0,0) を出発し、 1 以上 N 以下の各 i に対し、時刻 t i に 点 (x i ,y i ) を訪れる予定です。

// AtCoDeerくんが時刻 t に 点 (x,y) にいる時、 時刻 t+1 には 点 (x+1,y), (x−1,y), (x,y+1), (x,y−1) のうちいずれかに存在することができます。 
// その場にとどまることは出来ないことに注意してください。 
// AtCoDeerくんの旅行プランが実行可能かどうか判定してください。

// 制約
// 1 ≤ N ≤ 10^5
// 0 ≤ x i ≤ 10^5
// 0 ≤ y i ≤ 10^5
// 1 ≤ t i ≤ 10^5
// t i < t i+1 (1 ≤ i ≤ N - 1)
// 入力は全て整数

#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    int t[100001], x[100001], y[100001];
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> t[i] >> x[i] >> y[i];
    
    int sum = 0;
    string result;
    for (int i = 1; i <= N; i++)
    {
        if ((t[i] - t[i-1]) >= abs(x[i] - x[i-1]) + abs(y[i] - y[i-1])){
            if (t[i] % 2 == 0 && (x[i] + y[i]) % 2 == 0) sum += 0;
            else if (t[i] % 2 == 1 && (x[i] + y[i]) % 2 == 1) sum += 0;
            else sum += 1;
        }
        else sum += 1;
    }
    if(sum != 0) result = "No";
    else result = "Yes";
    cout << result << endl;
    return 0;
}