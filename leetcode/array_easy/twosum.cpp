#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> temp;
        for(int i=0; i<nums.size(); i++) {
            int r_num = target - nums[i];            //finding the reminder number
            if(temp.find(r_num)==temp.end()) {        // checking the reminder number is there in the unordered map
                temp[nums[i]] = i;                   // adding the key(#here value) value(index) pair
            }else {
                return {i,temp[r_num]};              // return the pair
            }
        }
        return {};
}
int main() {
    vector<int> v{1,2,3,4,5};
    vector<int> res=twoSum(v,4);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout," "));
    return 0;
}