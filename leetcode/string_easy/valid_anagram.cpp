#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "rat";
    string t = "car";
    if(s.length() != t.length()){
        cout<<"false"<<endl;
        exit(0);
    } 
        
    vector<int> check(26);
        
    for(int i=0; i<s.length(); i++) {
        check[s[i]-'a']++;
    }
    for(int i=0; i<t.length(); i++) {
        if(check[t[i]-'a'] == 0){
            cout<<"false"<<endl;
            exit(0);
        }
        check[t[i]-'a']--;
    }
    cout<<"true"<<endl;

}
