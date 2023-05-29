#include <iostream>
using namespace std;

int main(){
    int n, m, w;
    int cnt[11] = {0, };

    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> w;
        cnt[w]++;
    }
    
    int res = n*(n-1)/2;
    for(auto i : cnt){
        if(i>1) res -= i*(i-1)/2;
    }
    cout << res;
}