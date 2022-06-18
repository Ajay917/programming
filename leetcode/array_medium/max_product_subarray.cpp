#include <bits/stdc++.h>

using namespace std;


int main() {
    
        vector<int> nums{2,3,-2,4};
        int curr_max_product = nums[0];
        int curr_min_product = nums[0];
        int prev_max_product = nums[0];
        int prev_min_product = nums[0];
        int res = nums[0];
        
        for(int i=1; i<nums.size(); i++) {
            int temp = max(prev_max_product*nums[i],prev_min_product*nums[i]);
            curr_max_product = max(temp,nums[i]);
            temp = min(prev_max_product*nums[i],prev_min_product*nums[i]);
            curr_min_product = min(temp,nums[i]);
            
            res = max(res,curr_max_product);
            
            prev_max_product = curr_max_product;
            prev_min_product = curr_min_product;
            
        }
        cout<<res<<endl;
}