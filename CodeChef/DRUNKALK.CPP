#include <bits/stdc++.h>

using namespace std;

int main() 
{

    int tt;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int n ,total=0 ;
        cin >> n;
        for(int j = 1 ; j<=n;j++){
            //cout<< j <<" "<< total<<endl;
            if (j%2==0){
                total=total-1;
            }else{
                total=total+3;
            }
        }
        cout<<total<<endl;

    }
    return 0;
}
