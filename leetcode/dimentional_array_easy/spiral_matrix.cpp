#include <bits/stdc++.h>

using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r1 = 0;
        int r2 = matrix.size() -1;
        int c1 = 0; 
        int c2 = matrix[0].size()-1;
        vector<int> res;
        while(r1 <= r2 and c1 <= c2) {
            
            // filling left to right
            for(int c=c1; c <=c2; c++) res.push_back(matrix[r1][c]);
            
            // filling downward
            for(int r=r1+1; r<=r2; r++) res.push_back(matrix[r][c2]);
            
            if(r1<r2 and c1<c2) {
            // filling right to left
            for(int c=c2-1; c>=c1; c--) res.push_back(matrix[r2][c]);
            //filling upward
             for(int r=r2-1; r>r1; r--) res.push_back(matrix[r][c1]);  
            }
            r1++;
            c1++;
            r2--;
            c2--;
        }
    
        return res;
}
int main() {

    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> res = spiralOrder(mat);
    cout<<"[";
    for(auto x:res) {
        cout<<x<<",";
    
    }
    cout<<"]"<<endl;

    return 0;
}
