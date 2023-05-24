#include <iostream>
using namespace std;

int main(){
    int n, k, cnt = 0;
    cin >> n >> k;

    while(true){
        cnt += n - (n/k)*k;
        n = (n/k)*k;
        if(n<k) break;
        n/=k;
        cnt++;
    }
    cnt += n-1;
    cout << cnt;
}