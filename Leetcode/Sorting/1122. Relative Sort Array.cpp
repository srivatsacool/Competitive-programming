class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>fi ;
        sort(arr1.begin(),arr1.end());
        for(int i = 0 ; i < arr2.size() ; i++){
            for(int j = 0 ; j < arr1.size() ; j++){
                if(arr2[i] == arr1[j]){
                    fi.push_back(arr2[i]);
                    arr1[j] = 123456 ;// this number is a random value that will never occur 
                }    
            }
        }
        
        for(int i = 0 ; i < arr1.size() ; i++){
            if(arr1[i] != 123456)fi.push_back(arr1[i]);
        }
        
    return fi ;
    }
};
