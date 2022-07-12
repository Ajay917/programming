#include <bits/stdc++.h>

using namespace std;

bool isValid(string s) {
        stack<char> st;
        
        for(auto c:s) {
            if (c == '(') st.push(')');
            else if (c == '[') st.push(']');
            else if (c == '{') st.push('}');
            else if (st.empty() or st.top()!=c) return false;
            else st.pop();
        }
        return st.empty() == true;  
}
int main() {
    string s = "{}()}{";
    cout<<isValid(s)<<endl;
    return 0;
}