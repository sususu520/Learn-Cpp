// 問題文
// 高橋くんは、朝食にご飯、味噌汁、サラダを 1 皿ずつ食べます。

// 高橋くんの家のテーブルは細長いので、 3 皿を横一列に並べました。
// 並べ方は文字列 S によって与えられ、左から i 番目の皿は S i が R ならご飯、 S i  が M なら味噌汁、 S i が S ならサラダです。
// ご飯の皿が味噌汁の皿より左にあるかどうかを判定してください。

// 制約
// ∣S∣=3
// S には R M S が 1 文字ずつ含まれる

#include<iostream>
#include<string>
using  namespace std;

int main(){
    string S, result;
    int posion1, position2;
    cin >> S;
    if(S.find("R") < S.find("M")) result = "Yes";
    else result = "No";
    cout << result << endl;
    return 0;
}