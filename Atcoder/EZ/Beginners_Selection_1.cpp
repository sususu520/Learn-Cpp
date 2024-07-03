// 問題文
// 高橋君はデータの加工が行いたいです。

// 整数 a,b,cと、文字列 s が与えられます。 
// a+b+c の計算結果と、文字列 s を並べて表示しなさい。

// 制約
// 1≤a,b,c≤1,000
// 1≤∣s∣≤100

#include<iostream>
using namespace std;
int main(){
    int a; int b; int c; string s;
    cin >> a;
    cin >> b; cin >> c;
    cin >> s;
    cout << a + b + c << " " << s << endl;
    return 0;
    }