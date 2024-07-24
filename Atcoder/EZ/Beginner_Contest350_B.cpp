// 問題文
// 英小文字からなる文字列 S と T が与えられます。

// 以下の条件を満たす 
// 1≤c≤w<∣S∣ となる整数の組 c と w が存在するか判定してください。
// ただし、 ∣S∣ は文字列 S の長さを表します。
// ここで、w は ∣S∣ 未満である必要があることに注意してください。

// S を先頭から順に w 文字毎に区切ったとき、長さが c 以上の文字列の c 文字目を順番に連結した文字列が T と一致する
// 制約
// S と T は英小文字からなる文字列
// 1≤∣T∣≤ ∣S∣≤100





#include<iostream>
#include<string>
using namespace std;

bool isMatching(const string& S, const string& T){
    int n = S.size();

    for (int w = 1; w < n; w++)
    {
        for (int c = 1; c <= w; c++)
        {
            string temp;
            for (int i = 0; i < n; i += w)
            {
                if (i + c - 1 < n)
                {
                    temp += S[i + c - 1];
                }
            }
            if (temp == T)
            {
                return true;
            }
            
        }
        
    }
    return false;
}

int main(){
    string S, T;
    cin >> S >> T;

    if (isMatching(S, T)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}