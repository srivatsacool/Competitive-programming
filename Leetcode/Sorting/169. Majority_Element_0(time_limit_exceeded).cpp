class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N = nums.size() ;
        for(int i = 0 ; i < N  ; i++)
        {
            int res = count(nums.begin(),nums.end(),nums[i]); 
            if(res>(int)N/2)
                return nums[i];
        }
        return 0 ;
    }
};
