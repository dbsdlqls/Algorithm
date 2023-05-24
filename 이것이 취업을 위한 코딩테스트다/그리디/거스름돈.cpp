#include <iostream>
using namespace std;

int main(){
    int n, res = 0;
    int coin[4] = {500, 100, 50, 10};
    cin >> n;

    for(int i=0;i<4;i++){
        res += n/coin[i];
        n %= coin[i];
    }
    
    cout << res;
}