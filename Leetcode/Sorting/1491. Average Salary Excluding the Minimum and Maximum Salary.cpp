class Solution {
public:
    double average(vector<int>& salary) {
        deque<double> fi ;
        int i , total = 0;
        for(i = 0 ; i < salary.size() ; i++){
            fi.push_back(salary[i]);
        }
        sort(fi.begin(),fi.end());
        fi.pop_front();
        fi.pop_back();
        for(i=0;i < fi.size() ; i++){
            total += fi[i];
        }
        for(auto x : fi){
            cout << x << ' ';
        }
        
    return total/double(fi.size()) ;
    }
};
