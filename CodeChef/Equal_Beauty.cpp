#include <bits/stdc++.h>

using namespace std;

int main() 
{

    int tt;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int a ,b , c;
        cin >> a >> b >> c;
        int marks = b*3;
        marks = marks + ((a-b)*-1);
        if(marks>=c)cout<<"PASS"<<endl;
        else cout<<"FAIL"<<endl;

    }
    return 0;
}
