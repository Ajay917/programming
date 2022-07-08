#include <bits/stdc++.h>

using namespace std;
int findMin(vector<int>& nums) {
        
        if(nums.size()==1) return nums[0];
        
        int start = 0;
        int end = nums.size()-1;
        
        if(nums[end] > nums[start]) return nums[0];
        
        while(start <= end) {
            
            int mid = (start + end) / 2;
            if(nums[mid] > nums[mid+1]) return nums[mid+1];
            else if (nums[mid] < nums[mid-1]) return nums[mid];
            
            if(nums[mid] < nums[0]) end=mid-1;
            else if(nums[mid] > nums[0]) start = mid+1;
            
        }
        return -1;
}

int main() {
    vector<int> nums{3,4,5,1,2};
    cout<<findMin(nums)<<endl;

}
