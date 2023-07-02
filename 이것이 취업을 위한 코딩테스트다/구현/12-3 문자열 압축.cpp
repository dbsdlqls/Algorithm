#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int result = s.length();
    string unit = "", sub = "";
    
    for(int i=1;i<=s.length()/2;i++){
        int  cnt = 1, len = 0;
        unit = s.substr(0, i);
        
        for(int j=i;j<s.length();j+=i){
            sub = s.substr(j, i);
            
            if(unit == sub){
                cnt++;
            }
            else{
                len += i;
                if(cnt > 1){
                    len += to_string(cnt).length();
                }
                cnt = 1;
                unit = sub;
            }
        }
        
        len += unit.length();
        if(cnt > 1){
            len += to_string(cnt).length();
        }

        result = (len < result) ? len : result;
    }
    
    answer = result;
    return answer;
}