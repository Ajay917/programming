#include <bits/stdc++.h>

using namespace std;

                // approach here is that two pointer

vector<int> twoSum(vector<int>& nums, int target) {
        
        int a_point = 0;
        int b_point = nums.size()-1;
        
        while(a_point <= b_point) {
            
            if(nums[a_point]+nums[b_point] > target) b_point--; // if the sum is bigger than the target, we shift the right pointer to left 
            else if(nums[a_point]+nums[b_point] < target) a_point++; // if the sum is lesser than the target , we shift the left pointer to right
            else return {a_point+1,b_point+1}; // if the sum is got then the indices will be returned since there is only one pair.
        }
        return {};
}
int main() {
    vector<int> v1{2,7,11,15};
    vector<int> res=twoSum(v1,9);
    /*for(auto x: res) {
       copy(x.begin(),x.end(),ostream_iterator<int>(cout," "));
    }*/
    for(auto x: res) {
        cout<<x<<",";

    }
    return 0;
}