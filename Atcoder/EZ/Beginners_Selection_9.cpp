// 問題文
// 日本でよく使われる紙幣は、10000 円札、5000 円札、1000 円札です。
// 以下、「お札」とはこれらのみを指します。

// 青橋くんが言うには、彼が祖父から受け取ったお年玉袋にはお札が N 枚入っていて、合計で Y 円だったそうですが、嘘かもしれません。
// このような状況がありうるか判定し、ありうる場合はお年玉袋の中身の候補を一つ見つけてください。
// なお、彼の祖父は十分裕福であり、お年玉袋は十分大きかったものとします。

// 制約
// 1≤N≤2000
// 1000≤Y≤2×10^7
// N は整数である。
// Y は 1000 の倍数である。

#include<iostream>
using namespace std;

int main(){
    int N, Y;
    cin >> N >> Y;
    int x, y, z;
    for ( x = 0; x <= N; x++)
    {
        for ( y = 0; y <= (N - x); y++)
        {   
            z = N - x - y;
            if (Y == 1000 * z + 5000 * y + 10000 * x)
            {
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
            
        }
        
    }
    cout << "-1 -1 -1" << endl;
    return 0;

}