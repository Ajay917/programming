#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> generateMatrix(int n) {
        
        int r1 = 0;
        int r2 = n-1;
        int c1 = 0;
        int c2 = n-1;
        vector<vector<int>> res( n , vector<int> (n));
        int val = 1;
        while(r1 <= r2 and c1 <= c2) {
            
            for(int c = c1; c <= c2; c++) res[r1][c] = val++;
            
            for(int r = r1+1; r <= r2; r++) res[r][c2] = val++;
            
            if(r1 < r2 and c1 < c2) {
                
                for(int c=c2-1; c>=c1; c--) res[r2][c] = val++;
                for(int r=r2-1; r>r1; r--) res[r][c1] = val++;
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return res;
        
}
int main() {

    int n = 3;
    vector<vector<int>> res = generateMatrix(n);
    for(auto x:res) {
        cout<<"[";
        for(auto y:x){
            cout<<y<<",";
        }
        cout<<"]";
    }
    return 0;
}
