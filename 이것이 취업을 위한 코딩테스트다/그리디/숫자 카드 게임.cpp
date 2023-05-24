#include <iostream>
using namespace std;

int main(){
    int n, m, num;
    int candidate, maxVal = 0;
    
    cin >> n >> m;
    for(int i=0;i<n;i++){
        candidate = 10001;
        for(int j=0;j<m;j++){
            cin >> num;
            candidate = min(candidate, num);
        }
        maxVal = max(maxVal, candidate);
    }
    cout << maxVal;
}