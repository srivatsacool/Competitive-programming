#include <bits/stdc++.h>

using namespace std;

int main() 
{ 

    int tt;
    cin>>tt ;
    for (int i = 0 ; i < tt ;i++){
        int j = 0;
        vector<int>score ;
        for (j = 0 ; j<5 ; j++){
            int temp ;
            cin>>temp;
            score.push_back(temp);
        }
        int ind = 0,eng =0;
        for (j = 0 ; j<5 ; j++){
            if(score[j]!=0){
                if(score[j]==1)ind++;
                else eng++;
            }
        }
        //cout << ind << " " << eng << endl;

        if(ind==eng)cout<<"DRAW"<<endl;
        else if (ind > eng)cout << "INDIA"<<endl;
        else cout<<"ENGLAND"<<endl;
    }
    return 0;
}
