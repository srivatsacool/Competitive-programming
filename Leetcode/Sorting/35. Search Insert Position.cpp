class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target < nums.front())return 0;
        if(nums.back() < target)return nums.size();
        for(int i = 0 ; i < nums.size() ;i++ ){
            if(nums[i]==target)return i;
            
            else if(nums[i+1]>target )return i+1;
            }
    return 0 ;    
    }
};
