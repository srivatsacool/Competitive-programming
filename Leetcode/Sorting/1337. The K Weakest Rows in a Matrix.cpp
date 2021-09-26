bool cmp(pair<int, int> a,
         pair<int, int> b)
{
    if(a.second == b.second && a.first > b.first )a.first < b.first;
    return a.second < b.second;
}

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<int> fi;
        vector<pair<int,int>>count;
        int c_1 = 0 ;
        for(int i = 0 ; i < mat.size(); i++){
            c_1 = 0 ;
            for(int j = 0 ; j < mat[i].size() ; j++ ){
                if(mat[i][j ]== 1)c_1++;
            }
            count.push_back({i , c_1});
        }
        cout << '\n';
        sort(count.begin(),count.end(),cmp);
        
        for(auto x : count)cout << x.first<< ' '<< x.second << " \n" ;
        
        for(int i = 0 ; i < k ;i++){
            fi.push_back(count[i].first);
        }
        
    return fi ;
    }
};
