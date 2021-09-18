class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size() ;i++ ){
            if(nums[i]==target)return i;
            else if(nums[i] == nums.front() && target < nums[i])return i;
            
            else if(nums[i]<target && nums[i]==nums.back())return i+1;
            
            else if(nums[i]!=nums.back() && nums[i+1]>target )return i+1;

            }
    return 0 ;    
    }
};
