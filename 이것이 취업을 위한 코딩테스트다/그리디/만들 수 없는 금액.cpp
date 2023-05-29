#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, c;
    vector<int> coins;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> c;
        coins.push_back(c);
    }
    sort(coins.begin(), coins.end());

    int target = 1;
    for(int i=0;i<n;i++){
        if(coins[i]>target){
            break;
        }
        target += coins[i];
    }

    cout << target;
}