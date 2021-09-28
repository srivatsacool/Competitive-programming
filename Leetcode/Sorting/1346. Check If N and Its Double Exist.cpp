class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       for(int i= 0 ; i < arr.size() ; i++){
           for(int j = 1 ; j < arr.size() ; j++){
               if(double(arr[i]) == double(arr[j] * 2)|| double(arr[i]) == double(arr[j] / 2.00)){
                   cout << arr[i] << " "<< arr[j] ;
                   return true ;
               }    
           }
       } 
    return false ;
    }
};
