#include <bits/stdc++.h>

using namespace std;

                // approach here is that fix a number and find the pair(recreating the two sum problem sol)

vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        set<vector<int>> set1;
        sort(nums.begin(),nums.end());
    
        for(int i = 0; i<=nums.size()-3; i++) {
            int a_point = i+1;
            int b_point = nums.size()-1;
            //if(i==0 or (i>0 and nums[i] != nums[i-1])){
            
                while(a_point < b_point) {
                    if(nums[a_point]+nums[b_point]+nums[i] > 0) b_point--;
                    else if(nums[a_point]+nums[b_point]+nums[i] < 0) a_point++;
                    else {
                        set1.insert({nums[i],nums[a_point],nums[b_point]});
                        b_point--;
                        a_point++;
                    }
                }
            
        }
        for(auto x:set1) {
            res.push_back(x);
        }
        return res;
}
int main() {
    vector<int> v1{-1,0,1,2,-1,-4};
    vector<vector<int>> res=threeSum(v1);
    /*for(auto x: res) {
       copy(x.begin(),x.end(),ostream_iterator<int>(cout," "));
    }*/
    for(auto x: res) {
        cout<<"[";
        for(auto y:x) {
            cout<<y<<",";
        }
        cout<<"]";
    }
    return 0;
}