int summ(vector<int>nums){
    int total = 0 ;
    for(int i =0 ; i < nums.size();i++){
        total += nums[i];
    }
    return total ;
}

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0 ; 
        bool checker = false ;
        while(i < nums.size() && k > 0){
            checker = false ;
            if(nums[i] == 0){
                k-- ; checker = true ;
            }
            else if(nums[i]<0){
                nums[i]= nums[i]*-1 ;
                i++ ; k--;
                checker = true ;
            }
            if(checker == false)break ;
        }
        sort(nums.begin(),nums.end());
        while(k > 0){
            if(k%2==0)return summ(nums);
            nums[0] = nums[0]*-1;
            k-- ;
        }
        
    return summ(nums);
    }
};
