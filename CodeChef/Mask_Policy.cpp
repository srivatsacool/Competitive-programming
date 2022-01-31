#include <bits/stdc++.h>

using namespace std;
int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int x,y ;
        cin >> x >> y ;
        int c = x - y;
        //cout << c <<endl ;
        if(y>c){
            cout << c << endl;
        }else{
            cout<<y<<endl;
        }

    }

    return 0;
}
