class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         
        int cosize = 0;
        for (int i = 0 ; i < s.size() ; i++){
            cosize += s[i];
        }
        int sat = 0 ;
        for(int i = 0 ; i < g.size() ; i++){
            if(cosize >= g[i]){
                cosize = cosize - g[i];
                sat ++;
            }
        }
        return sat ;
        
    }
};
