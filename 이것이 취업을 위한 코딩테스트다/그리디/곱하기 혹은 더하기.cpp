#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int num, res = 0;
    string s;
    cin >> s;

    for(int i=0;i<s.length();i++){
        num = s[i] - '0';
        if(num<=1 || res<=1)
            res+=num;
        else
            res*=num;
    }
    cout << res;
}