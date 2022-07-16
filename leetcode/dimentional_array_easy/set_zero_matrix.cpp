#include <bits/stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int rowzero=1;
        for(int row=0; row<rows; row++) {                     //setting the zero in place if the current number is 0
            for(int col=0; col<cols; col++) {                 // for rows indicator and columns indicator
                if(mat[row][col] == 0) {
                    mat[0][col] = 0;
                    
                    if(row > 0) mat[row][0] = 0;
                    else
                        rowzero = 0;
                }
            }
        }
        for(int row=1; row<rows; row++) {                            // setting zero for the postion if it need to be
            for(int col=1; col<cols; col++) {
                if(mat[row][0] == 0 or mat[0][col] == 0) {
                    mat[row][col] = 0;                   
                }
            }
        }
        if(mat[0][0] == 0) {                                         // for row the inplace
            for(int row=0; row<rows; row++) mat[row][0] = 0;
        }
        if(rowzero==0) for(int col=0; col<cols; col++) mat[0][col] = 0;
        
}
int main() {
    
    vector<vector<int>> mat{
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    setZeroes(mat);
    for(auto x:mat) {
        cout<<"[";
        for(auto y:x){
            cout<<y<<",";
        }
        cout<<"]";
    }

    return 0;
}