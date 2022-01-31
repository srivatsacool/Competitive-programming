#include <bits/stdc++.h>

using namespace std;
int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int x,y,z ;
        bool t = false;
        cin >> x>>y>>z ;
        if(x>=y){
            t = true;
            cout << "PIZZA" << endl ;
        }
        else if(x>=z && t==false){
            cout << "BURGER"<<endl;
        }
        else{
            cout <<"NOTHING" <<endl;
        }

    }

    return 0;
}
