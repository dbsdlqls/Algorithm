#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, val, res = 0;
    vector<int> vals;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> val;
        vals.push_back(val);
    }

    sort(vals.begin(), vals.end());

    int p = 0;
    for(vector<int>::iterator iter = vals.begin(); iter!=vals.end();iter++){
        p += 1;
        if(*iter <= p){
            res += 1;
            p = 0;
        }
    }

    cout << res;
}