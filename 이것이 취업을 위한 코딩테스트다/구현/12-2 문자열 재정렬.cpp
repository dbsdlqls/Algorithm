#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int i, num, res = 0;
    cin >> s;

    sort(s.begin(), s.end());

    for(i=0;i<s.length();i++){
        num = s[i] - '0';
        
        if(num < 0 || num > 9)
            break;
        res += num;
    }
    
    if(i) // 숫자가 입력된 경우
        cout << s.substr(i) << res;
    else // 알파벳만 입력된 경우
        cout << s.substr(i);
}