#include <iostream>
#include <string>
using namespace std;

int main(){
    int left = 0, right = 0;
    string s;
    cin >> s;

    int len = s.length();
    int i;

    for(i=0;i<len/2;i++){
        left += s[i] - '0';
    }
    for(;i<len;i++){
        right += s[i] - '0';
    }

    if(left == right) cout << "LUCKY";
    else cout << "READY";
}