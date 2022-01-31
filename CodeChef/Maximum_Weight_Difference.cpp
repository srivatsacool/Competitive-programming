#include <bits/stdc++.h>
using namespace std;

int add(vector<int>fi , int no , int size){
    int total = 0 ;
    for(int i = 0 ; i < size - no ;i++ ){
        total = total + fi[i];
    }
    return total ;
}

// int badd(vector<int>fi , int no , int size){
//     int total = 0 ;
//     for(int i = size-1 ; i >= size - no ;i--){
//         total = total + fi[i];
//     }
//     return total ;
// }

int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int n , k , tl = 0;
        cin >> n >> k ;
        vector<int>gi;
        for(int j = 0 ; j < n ;j++){
            int x = 0 ;
            cin >> x;
            tl = tl + x ;
            gi.push_back(x);
        }
    
    sort(gi.rbegin(),gi.rend());
    int sum1 = abs(add(gi,k,n)); //sum of large k number

    sort(gi.begin(),gi.end());
    int sum2 = abs(add(gi,k,n));//sum of small k numbers
    // for(auto i : gi){
    //     cout << i<<" ";
    // }    
    cout<< max(abs(sum1-(tl-sum1)),abs(sum2-(tl-sum2))) <<endl ;
    }

    return 0;
}
