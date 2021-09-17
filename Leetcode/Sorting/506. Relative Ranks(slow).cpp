class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>so(score.begin(),score.end());
        sort(so.begin(),so.end(),greater<int>());
        vector<int>::iterator it;
        vector<string>fi;
        
        for(int i = 0 ; i < score.size() ; i ++){
            if(score[i] == so[0])fi.push_back("Gold Medal");
            else if (score[i] == so[1])fi.push_back("Silver Medal");
            else if (score[i]==so[2])fi.push_back("Bronze Medal");
            else{
                it = find(so.begin(),so.end(),score[i]);
                string n = to_string((it - so.begin())+1) ;
                fi.push_back(n);
            }
        }    
        return fi;
        
    }
};
