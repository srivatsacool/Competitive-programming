#include <bits/stdc++.h>

using namespace std;

int main() 
{

    int tt;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int a ,b,wd=0,streak=0,str=0;

        string s;
        cin >> a >> b ;
        cin >> s;
        for(int j= 0 ; j < s.length();j++){
            if(s[j] == '1'){
                wd++;
                str++;
            }else{
                str = 0;
            }
            streak = max(str,streak);


        }
        cout<<(wd*a+(b*streak))<<endl;
    }
    return 0;
}
