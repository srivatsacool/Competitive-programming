class Solution {
public:
    double trimMean(vector<int>& arr) {
        double n = arr.size();
        sort(arr.begin(),arr.end());
        double per = double(5)/double(100)*double(n);
        int i = 0;
        double total = 0.0;
        for(i = 0 ; i < per ; i++){
            arr.pop_back();
            arr.erase(arr.begin());
        }
        for(auto x : arr){
            total += x ;
        }
    return double(total)/double(arr.size()) ;
    }
};
