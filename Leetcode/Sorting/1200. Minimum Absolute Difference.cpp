class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector<vector<int>>fi ;
        map<int,vector<pair<int,int>>>temp;
        
        sort(arr.begin(),arr.end());
        
        int diff = abs(arr[0] - arr [1]);
        for(int i  = 0 ; i < arr.size()-1 ; i++){
            int n = abs(arr[i+1]-arr[i]);
            if(n < diff){
                diff = n ;
            }
            temp[n].push_back({arr[i],arr[i+1]});
        }
        
        //cout << diff ;
        
        for(auto m : temp){
            if(m.first == diff ){
                for(auto x : m.second){
                    fi.push_back({x.first , x.second});
                }
            }
        }
        
        /*for(int i = 0 ; i < temp.size() ; i++){
            cout << temp[i] << endl ;
            if(temp[i].first == diff){
                for(auto x : temp[i].second){
                    cout << x.first << ' ' << x.second << endl ;
                }
            }
        } 
        
        for(auto x : temp){
            cout << x.first << ' ' << x.second << endl ;
            fi.push_back({x.first,x.second});
        }*/
        
    return fi ;
    }
};
