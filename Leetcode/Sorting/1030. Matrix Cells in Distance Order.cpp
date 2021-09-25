class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        map<int , vector<pair<int,int>>>temp ;
        vector<vector<int>> fi ;
        for(int i = 0 ; i < rows ; i++ ){
            for(int j = 0 ; j < cols ; j++){
                temp[abs(i - rCenter) + abs(j - cCenter)].push_back({i,j});
            }
        }
        
        for(auto x : temp){
            for(auto y : x.second){
                fi.push_back({y.first , y.second});
            }
        }
        
    return fi ;
    }
};
