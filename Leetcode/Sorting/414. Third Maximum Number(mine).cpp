class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>res (nums.begin(),nums.end());
        vector<int>fi (res.begin(),res.end());
        
        if (fi.size()==1)return (fi[0]) ;
        if (fi.size()==2)return max(fi[0],fi[1]) ;
        
    return fi[fi.size()-3] ;    
    }
};

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>res (nums.begin(),nums.end());
        //vector<int>fi (res.begin(),res.end());
        nums.clear();
        copy(res.begin(),res.end(),back_inserter(nums));
        if (nums.size()==1)return (nums[0]) ;
        if (nums.size()==2)return max(nums[0],nums[1]) ;
        
    return nums[nums.size()-3] ;    
    }
};
