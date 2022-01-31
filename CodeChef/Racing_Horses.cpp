#include <bits/stdc++.h>

using namespace std;
int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int n = 0 ; 
        cin >> n ;
        vector<long int>base ;
        for (int j = 0 ; j < n ; j++){
            long int k = 0 ;
            cin >> k ;
            base.push_back(k);
        }
    sort(base.rbegin(),base.rend());

    int MIN = INT_MAX;
    for(i = 0 ; i < n-1 ; i++){
        if(base[i]-base[i+1]<MIN){
            MIN = base[i]-base[i+1] ;
        }
    }
    // for (auto i : base){
    //     cout << i << " " ;
    // }
    cout<<MIN;
    }

    return 0;
}
