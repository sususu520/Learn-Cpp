// 問題文
// シカのAtCoDeerくんは二つの正整数 a,b を見つけました。 
// a と b の積が偶数か奇数か判定してください。

// 制約  1 ≤ a,b ≤ 10000   a,b は整数


#include<iostream>
using namespace std;

int main(){
    int a; int b;
    cin >> a; cin >> b;
    cout << (((a * b) % 2 == 0) ? "Even" : "Odd") << endl;
    return 0;
}