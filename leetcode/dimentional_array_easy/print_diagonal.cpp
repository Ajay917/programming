#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<vector<int>> vect{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int n = 3;
    vector<int> res;
	// for printing half anti-diagonal elements
	for(int i=0; i<n; i++) {
	    int row = 0;
	    int col = i;
	        
	    while(row < n and col >=0) {
	        res.push_back(vect[row][col]);
	        row++;
	        col--;
	    }
	}
	// for printing remaining anti-diagonal elements
	for(int j=1; j<n; j++) {
	    int row = j;
	    int col = n-1;
	        
	    while(row < n and col >= 0) {
	        res.push_back(vect[row][col]);
	        row++;
	        col--;
	    }
	}
	copy(res.begin(), res.end(), ostream_iterator<int>(cout," "));
	
    return 0;
}