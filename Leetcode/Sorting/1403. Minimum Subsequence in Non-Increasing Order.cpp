class Solution {
public:
    int sum (vector<int> num){
        int total = 0;
        for(int i = 0 ; i < num.size() ; i++){
            total += num[i];
        }
    return total ;
    }
    
    
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> fi ;
        sort(nums.begin(),nums.end(),greater<int>());
        int total = sum(nums);
        int fitotal  = 0;
        if(nums.size() == 1  )return nums;
        for(int i = 0 ; i < nums.size() ; i++){
            if(total - fitotal < fitotal)break ;
            fi.push_back(nums[i]);
            fitotal = sum(fi);
        }
        
    return fi ;
    }
};
