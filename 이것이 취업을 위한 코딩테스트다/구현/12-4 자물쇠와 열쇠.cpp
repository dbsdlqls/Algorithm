#include <string>
#include <vector>

using namespace std;

bool check(vector<vector<int>> &key, vector<vector<int>> &lock, int startc, int startr){
    int m = key.size();
    int n = lock.size();
    
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            if(x<startr || x>=startr+m || y<startc || y>=startc+m){
                if(lock[x][y] == 0) return false;
            }
            else{
                int kx = x-startr, ky = y-startc;
                if(key[kx][ky] == 1 && lock[x][y] == 1)
                    return false;
                else if(key[kx][ky] == 0 && lock[x][y] == 0)
                    return false;
            }
        }
            
    }

    return true;
}

vector<vector<int>> rotate(vector<vector<int>> &key){
    int m = key.size();
    vector<vector<int>> after;
    
    for(int x=0;x<m;x++){
        vector<int> temp;
        for(int y=0;y<m;y++){
            temp.push_back(key[m-1-y][x]);
        }
        after.push_back(temp);
    }
    return after;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
    bool answer = false;
    int n = lock.size();
    
    for(int i=0;i<4;i++){
        key = rotate(key);// 회전
        for(int j=-n+1;j<n;j++){// 좌우
            for(int k=-n+1;k<n;k++){// 상하
                if(check(key, lock, j, k))
                    return true;
            }
        }
    }
    
    return answer;
}