    int power(int A , int B){
            A = pow(A,2);
            B = pow(B,2);
            return A < B;
        }
class Solution {
public:
    
    vector<int> sortedSquares(vector<int>& nums) {
        //sort(nums.begin(),nums.end(),power);
        for(int i = 0 ; i < nums.size() ; i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
    return nums;
    }
};
