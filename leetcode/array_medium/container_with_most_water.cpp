#include <bits/stdc++.h>

using namespace std;

/*bruteforce        finding all the rectangle combinations and units of water
  int water = 0;
  for(int i=0; i<height.size(); i++) {
    for(int j=i+1; j<height.size(); j++) {
        int water = max(water,(j-i)*min(height[i]-height[j]));
    }
  }
  return water
*/

// optimal approach is that two pointer
int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        
        int max_water_so_far = 0;
        while(start < end) {
            int water = min(height[start],height[end])*(abs(start - end));
            max_water_so_far = max(water,max_water_so_far);
            
            if(height[start] >= height[end] ) end--;                  // moving towards left since left is bigger
            else if(height[start] <= height[end]) start++;            // vice versa
        }
        return max_water_so_far;
}
int main() {
    vector<int> height{1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height)<<endl;
    return 0;
}