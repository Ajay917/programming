#include<bits/stdc++.h>

using namespace std;

void swap(vector<int> &nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
}
void reverse(vector<int> &nums, int start, int end){
    while(end >= start) {
        swap(nums,start,end);
        start++;
        end--;
    }
}
void nextPermutation(vector<int>& nums) {
    int i = nums.size()-2;
    while( i >=0 and nums[i] >= nums[i+1]) i--;
        
    if(i>=0){
        int j = nums.size()-1;
        while(j>=0 and nums[j] <= nums[i]) j--;
        swap(nums,i,j);
    }
        
    reverse(nums,i+1,nums.size()-1);
}

int main() {

    vector<int> nums{1,1,5,4,1};
    nextPermutation(nums);
    copy(nums.begin(),nums.end(),ostream_iterator<int>(cout," "));
    return 0;
}