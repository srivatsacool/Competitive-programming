class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int ans ;
        unordered_map<int,int> m ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            m[nums[i]]++;
        }
        for(auto i : m)
        {
            if(i.second > nums.size()/2)
                ans = i.first;
        }
        return ans ;
    }
};
