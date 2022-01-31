#include <bits/stdc++.h>

using namespace std;
int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int x ;
        string fi ;
        cin >> x ;
        for (int i = 0 ; i < x ;i++){
            if(i%3==0){fi.append("a");};
            if(i%3==1){fi.append("b");};
            if(i%3==2){fi.append("c");};
        }
        cout << fi <<endl ;

    }

    return 0;
}
