#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    int col = cin.get() - 96;
    int row = cin.get() - 48;

    int dc[] = {2, 2, -2, -2, 1, -1, 1, -1};
    int dr[] = {1, -1, 1, -1, 2, 2, -2, -2};

    for(int i=0;i<8;i++){
        int nc = col+dc[i];
        int nr = row+dr[i];
        
        if(nc>=1 && nc<=8 && nr >=1 && nr<=8) cnt++;
    }

    cout << cnt;
}