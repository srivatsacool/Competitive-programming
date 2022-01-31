#include <bits/stdc++.h>

using namespace std;
int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int n ;
        cin >> n ;
        vector<int> te ;
        bool fi = false;
        vector<int> derived {1,2,3,4,5,6,7,6,5,4,3,2,1}; 
        for ( i = 0; i < n; i++)
        {
            int temp;
            cin >> temp ;
            te.push_back(temp);
        }
        for ( i = 0; i < n; i++)
        {
            if(te[i]==1 && abs(n-i) >= 13 ){
                fi = true ;
                for (int j = 0; j < 14 && fi == true; i++)
                {
                    if(te[j]==derived[j]){
                        continue;
                    }else{
                        fi = false ;
                        break;
                    }
                }
                if(fi){
                    cout << "yes" <<endl;
                    break;
                }
            }
        }
        cout << "no" << endl ;

        

        for(auto x : te){
            cout << x << " " ;
        } 

    }

    return 0;
}
