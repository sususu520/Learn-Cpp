// 問題文
// すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。
// 各マスには 0 か 1 が書かれており、マス i には s i が書かれています。
// すぬけ君は 1 が書かれたマスにビー玉を置きます。 
// ビー玉が置かれるマスがいくつあるか求めてください。

// 制約s 1, s 2, s 3 は 1 あるいは 0



#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
    int count(string s){
        int j = 0; 
        for(int i = 0; i < 3; i++){
            if(s[i] != '0' && s[i] != '1'){
                return -1;
            }
            else if(s[i] == '1'){
                j++;
            }
        }
        return j;
    }
};

int main(){
    Solution solution;
    string s;
    cin >> s;
    int result = solution.count(s);
    cout << result << endl;
    return 0;
}