bool cmp(pair<int,int>a , pair<int,int>b){
    if(a.first == b.first)return a.second > b.second;
    return a.first < b.first ;
}
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>> fi ;
        for(int i = 0 ; i < nums.size() ; i++){
             int n = count(nums.begin(),nums.end(),nums[i]);
             fi.push_back({n , nums[i]});
        }
        sort(fi.begin(),fi.end(),cmp);
        nums.clear();
        for(auto x: fi){
            cout << x.first << " " << x.second << endl ;
            nums.push_back(x.second);
        }
        
    return nums ;
    }
    
};
