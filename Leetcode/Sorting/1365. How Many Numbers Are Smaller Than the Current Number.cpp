class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>fi;
        for(int i = 0 ; i < nums.size() ; i++){
            int count = 0 ;
            for(int j = 0 ; j < nums.size() ; j++){
                if(nums[i]>nums[j])count++;
            }
            fi.push_back(count);
        }
    return fi ;
    }
};
