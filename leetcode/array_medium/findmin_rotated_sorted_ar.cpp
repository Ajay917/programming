#include <bits/stdc++.h>

using namespace std;
int findMin(vector<int>& nums) {
        
        int right = nums.size()-1;
        int left = 0;
        
        if(nums.size()==1) return nums[0];
        
        if(nums[right] > nums[0]) return nums[0];
        
        while(left < right) {
            int mid = (left + right) / 2;
            
            if(nums[mid] > nums[mid+1]) return nums[mid+1];
            if(nums[mid] < nums[mid-1]) return nums[mid];
            
            if(nums[mid] > nums[0]) left = mid+1;
            else right = mid -1;
        }
        return -1;
}

int main() {
    vector<int> nums{3,4,5,1,2};
    cout<<findMin(nums)<<endl;

}
