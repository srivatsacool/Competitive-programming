class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> fi ;
        vector<int> odd ;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i]%2==0)fi.push_back(nums[i]);
            else (odd.push_back(nums[i]));   
        }
        fi.insert(fi.end(),odd.begin(),odd.end());
    return fi;
    }
};
