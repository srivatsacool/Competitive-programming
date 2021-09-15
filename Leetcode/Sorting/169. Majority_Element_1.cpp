class Solution {
public:
    int findcandidate(vector<int>& nums)
        {
            int maj_index = 0 , count = 1 ;
            for (int i = 0 ; i < nums.size() ; i++)
            {
                if(nums[maj_index]==nums[i])
                    count++;
                else
                    count--;
                if(count == 0 )
                {
                    maj_index = i;
                    count = 1 ;
                }
            }
            return nums[maj_index] ;
        }
    
    int ismaj(vector<int>& nums , int cand)
        {
            int count = 0 ;
            for (int i = 1 ; i < nums.size() ; i++)
            {
                if (nums[i]==cand)
                    count++;
            }
            if(count > nums.size()/2)
                return cand ;
            return cand ;
        }
    
    int majorityElement(vector<int>& nums) {
        
        int res = findcandidate(nums);
        return ismaj(nums , res);
        
        
    }
    
};
