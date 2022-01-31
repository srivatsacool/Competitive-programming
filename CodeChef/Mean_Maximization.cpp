#include <bits/stdc++.h>

using namespace std;
int mean(vector<int>x , int y , bool z){
    int total = 0 ;
    if(z == false){
        for (int i= 0; i < y ;i++ ){
        total = total + x[i];
    }
    }else{
        for (int i= y; i < x.size() ;i++ ){
        total = total + x[i];
    }
    }
    return total;
}
int main(){

    int tt = 0;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        int n ;
        cin >> n;
        int b[n];
        for(int i = 0 ; i < n; i++){
            cin >> b[i];
        }
        vector<int>fi(b, b + sizeof b / sizeof b[0]);
        sort(fi.begin(),fi.end());

        // for(auto i : fi){
        //     cout << i << endl;
        // }
        bool bol =false;
        int mean1 = mean(fi , n/2, false);
        int mean2 = mean(fi , n/2 ,true);
        cout << mean2+mean1 <<endl;

    }

    return 0;
}
def splitt(word):
    return list(word)   
     
for x in range(int(input())):
    n = int(input())
    lis=(input())
    lis = splitt(lis)
    unlis = lis.copy()
    unlis.sort()
    count = 0 
    #print(lis)
    #print(unlis)
    for i in range(n):
        #print(lis[i],unlis[i])
        if(lis[i]!= unlis[i]):
            count = count+1 
    #print(count)   
    if(count<=2):
        print("YES")
    else:
        print("NO")
    
