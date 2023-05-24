#include <iostream>
using namespace std;

int main(){
    int n, m, k, num, res = 0;
    vector<int> nums;

    cin >> n >> m >> k;
    for(int i=0;i<n;i++){
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end(), greater<int>());

    res = ((m/(k+1))*k+m%(k+1))*nums[0] + m/(k+1)*nums[1];

    /*
    int cnt = 0;
    for(int i=0;i<m;i++){
        if(cnt < k){
            res += nums[0];
            cnt++;
        }
        else{
            res += nums[1];
            cnt = 0;
        }
    }
    */
    cout << res;
}