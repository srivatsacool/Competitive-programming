class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<pair<int,int>>num;
        for(int i = 0 ; i < nums.size() ; i++){
            num.push_back(make_pair(nums[i],i));
        }
        sort(num.rbegin(),num.rend());
        if(nums.size()==1)return 0;
        if(num[0].first >=num[1].first*2)return num[0].second;
        
        return -1;
    }
};
