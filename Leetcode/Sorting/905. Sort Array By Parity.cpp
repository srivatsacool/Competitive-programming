class Solution {
public:
    bool isEven(int& x) {
        return x % 2 == 0;
    }
    vector<int> sortArrayByParity(vector<int>& A) {
        deque <int> fi;
        for(int i = 0 ; i < A.size() ; i++){
            if(A[i]%2==0)fi.push_front(A[i]);
            else fi.push_back(A[i]);
        }
        return vector<int> (fi.begin(),fi.end());
    }
};






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
