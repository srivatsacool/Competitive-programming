class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
    return nums[0]*nums[1] - nums[nums.size()-1]*nums[nums.size()-2];
    }
};


class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int n = nums[0]*nums[1];
        int m = nums[nums.size()-1]*nums[nums.size()-2];
    return n-m;
    }
};
