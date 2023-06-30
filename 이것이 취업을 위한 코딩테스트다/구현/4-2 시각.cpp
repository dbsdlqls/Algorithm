#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int res = (n+1)*60*60;
    
    if(n<3) res -= (n+1)*45*45;
    else if(n<13) res -= n*45*45;
    else if(n<23) res -= (n-1)*45*45;
    else res -= (n-2)*45*45;

    cout << res;
}