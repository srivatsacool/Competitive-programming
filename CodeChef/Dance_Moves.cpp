#include <bits/stdc++.h>

using namespace std;

int main() 
{

    long long tt;
    cin >> tt ;
    for (long long i = 0 ; i<tt ; i++){
        long long a ,b ;
        cin >> a >> b ;
        if(a<=b)cout<<(b-a+1)/2+(b-a)%2<<endl;
        else{
            cout<<(a-b)<<endl;
        }

    }
    return 0;
}
