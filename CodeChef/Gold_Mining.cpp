#include <bits/stdc++.h>

using namespace std;

int main() 
{

    int tt;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int a ,b , c;
        cin >> a >> b >> c;
        a++;
        if(a*c >= b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
