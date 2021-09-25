class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 0 ;
        int left  = 0 ,right = 1;
        while(right < nums.size()){
            int diff = nums[right] - nums[left] ;
            if(diff == 1 )
                res =  max(res , right - left + 1);
            
            if (diff <= 1 )
                right++;
            else
                left++;   
        }
        return res ;
    }
};
