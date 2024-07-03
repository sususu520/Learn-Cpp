// 問題文
// 黒板に N 個の正の整数 A 1 ,...,A N が書かれています．
// すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．
// 黒板に書かれている整数すべてを 2 で割ったものに置き換える．
// すぬけ君は最大で何回操作を行うことができるかを求めてください．

// 制約
// 1≤N≤200
// 1≤A i ≤10^9


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
public:
    int devided(int N, vector<int>& A){
        int count = INT_MAX;
        for(int i = 0; i < N; i++){
            int n = 0;
            while(A[i] % 2 == 0){
                A[i] /= 2;
                n++;
            }
            if (count > n)
            {
                count = n;
            }
        }
        return count;
    }
};

int main(){
    Solution solution;
    int N;
    cin >> N;
    vector<int> A(N);
    for(int j = 0; j < N; j++){
        cin >> A[j];
    }
    cout << solution.devided(N, A) << endl;
    return 0;
}