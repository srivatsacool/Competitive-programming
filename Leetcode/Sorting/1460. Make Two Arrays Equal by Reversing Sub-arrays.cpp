class Solution {
public:
    bool canBeEqual(vector<int>& tar, vector<int>& arr) {
        sort(tar.begin(),tar.end());
        sort(arr.begin(),arr.end());
        for(int i = 0 ; i < tar.size() ; i++){
            if(arr[i]!=tar[i])return false;
        }
    return true ;
    }
};
