#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        if(haystack.empty() || haystack.size() < needle.size()) return -1;
        for(int i = 0; i <= haystack.size() - needle.size(); i++){
            int j;
            for(j = 0; j < needle.size(); j++){
                if(haystack[i + j] != needle[j]){
                    break;
                }
            }
            if(j == needle.size())
            return i;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    string haystack;
    string needle;

    cout << "Enter haystack: ";
    getline(cin, haystack);

    cout << "Enter needle: ";
    getline(cin, needle);

    int result = solution.strStr(haystack, needle);
    cout << "Result: " << result << endl;
    return 0;
}