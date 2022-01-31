#include <bits/stdc++.h>

using namespace std;
int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int x ;
        cin >> x ;
        string s ;
        cin >> s ;
        int countt = count(s.begin() , s.end() ,'1');
        // cout << countt<< endl;
        cout << int(countt*(countt+1) / 2) << endl;
    }

    return 0;
}
