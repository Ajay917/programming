
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        vector<int> chars_freq(128,0);
        int i = 0;
        int j = 0;
        chars_freq[s[j]] = 1;
        int res = 1;
        while(j != s.length()-1) {
            if(chars_freq[s[j+1]] == 0) {
                j++;
                chars_freq[s[j]] = 1;
                res = max(res, j-i+1);
                
            }
            else {
                chars_freq[s[i]]--;
                i++;
            }
        }
        return res;
    
}
int main() {
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}