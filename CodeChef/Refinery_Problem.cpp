#include <bits/stdc++.h>

using namespace std;
int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int x , m ;
        cin >> x >> m ;
        // int diff = x/m;
        int final = 0;
        for (int i = 1; i <= m; i++)
        {
            final = max(final , x % i);
        }
        
        cout << final <<endl;

    }

    return 0;
}
