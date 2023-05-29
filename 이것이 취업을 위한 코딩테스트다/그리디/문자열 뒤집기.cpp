#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int res = 0;
    bool flag = false;
    char c = s[0];
    for(int i=1;i<s.length();i++){
        if(c!=s[i] && !flag){
            flag = true;
            res += 1;
        }
        else if(c==s[i] && flag){
            flag = false;
        }
    }

    cout << res;
}