#include <bits/stdc++.h>

using namespace std;

int main() {

    string s="race car";
    string newstring = "";
       
    for(int i=0; i < s.length(); i++) {
            
        if(s[i] >= 'A' and s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        if(iswalnum(s[i])) newstring += s[i];
    }
    
        
    int start = 0;
    int end = newstring.length()-1;

        
    while(start < end) {
            
    if(newstring[start] != newstring[end]) {
        cout<<"false"<<endl;
        exit(0);
    }
        start++;
        end--;
    }
    cout<<"true"<<endl;
    return 0;
}