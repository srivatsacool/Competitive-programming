class Solution {
public:
    int i = 0 ;
    int sumup(vector<int>n) {
        int sum = 0;
        for(i = 0 ; i < n.size() ;i++ ){
            sum += n[i];
        }
    return sum ;
    }
    vector<int> fairCandySwap(vector<int>& als, vector<int>& bobs){
        vector<int>fi ;
        int sumal = sumup(als);
        int sumbob = sumup(bobs);
        cout << sumal <<" "<<sumbob ;
        for(i = 0 ; i < als.size(); i++){
            for(int j = 0 ; j < bobs.size() ; j++){
                if(sumal - als[i]+bobs[j] == sumbob - bobs[j]+als[i]){
                fi.push_back(als[i]);
                fi.push_back(bobs[j]);
                return fi ;
                }
            }
        }
        
    return fi;
    }
};
