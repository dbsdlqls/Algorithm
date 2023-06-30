#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, x = 1, y = 1;
    string s;

    cin >> n;
    cin.ignore();
    getline(cin, s);

    for(string::iterator iter = s.begin(); iter != s.end(); iter++){
        switch (*iter)
        {
        case 'L':
            y = y>1 ? y-1 : y;
            break;
        case 'R':
            y = y<n ? y+1 : y;
            break;
        case 'U':
            x = x>1 ? x-1 : x;
            break;
        case 'D':
            x = x<n ? x+1 : x;
            break;
        default:
            break;
        }
    }

    cout << x << " " << y;
}