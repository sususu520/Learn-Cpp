// 問題文
// 1 以上 N 以下の整数のうち、10 進法での各桁の和が A 以上 B 以下であるものの総和を求めてください。

// 制約
// 1≤N≤10^4
// 1≤A≤B≤36
// 入力はすべて整数である

#include<iostream>
using namespace std;

class Solution{
public:
    int some_sum(int i){
        int sum = 0;
        while (i > 0)
        {
            sum += (i % 10);
            i /= 10;
        }
        return sum;
    }
};

int main(){
    Solution solution;
    int N, A, B;
    cin >> N >> A >> B;
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        int sum = solution.some_sum(i);
        if(A <= sum && sum <= B)
        {
            count += i;
        }
    }
    cout << count << endl;
    return 0;
}
