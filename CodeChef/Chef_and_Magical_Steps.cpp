#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
int main() 
{

    int tt;
    cin >> tt ;
    for (int i = 0 ; i<tt ; i++){
        long long int a ,b,steps=0;
        cin >> a >> b ;
        while(a!=b){
            if(a+1==b){
                break;
            }
            if(isPrime(a+2)){
                steps+=2;
                a+=2;
            }else{
                steps++;
            }
        }
        cout<<steps<<endl;
    }
    return 0;
}
