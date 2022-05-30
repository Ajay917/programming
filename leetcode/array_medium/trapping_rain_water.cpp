#include<bits/stdc++.h>

using namespace std;
    
int trap(vector<int>& height) {
        int i = 0,j = height.size()-1 ,max_left = 0,max_right = 0, water = 0;
        while( i < j) {
            if(height[i] <= height[j]) {                        // slope towards right
                max_left = max(max_left,height[i]);
                water += (max_left - height[i]);
                i++;
            }
            else {                                              // slope towards left
                max_right = max(max_right, height[j]);
                water += (max_right - height[j]);
                j--;
            }
        }
        return water;
}

int main() {
    vector<int> height{4,2,0,3,2,5};
    cout<<trap(height)<<endl;
    return 0;
}