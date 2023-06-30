#include <iostream>
using namespace std;

int main(){
    int n, m, a, b, d;
    int nx, ny, cnt = 0;
    int map[50][50] = {{0, }, };
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    cin >> n >> m;
    cin >> a >> b >> d;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> map[i][j];
        }
    }

    while(true){
        if(map[a][b] == 0) {
            cnt++;
            map[a][b] = -1; // 가본 칸 표시
        }

        for(int i=0;i<4;i++){
            // 현재 방향 기준 왼쪽 방향으로 회전
            if(d-1 < 0) d = 3;
            else d -= 1;

            nx = a+dx[d];
            ny = b+dy[d];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 맵을 넘어가는 경우

            if(map[nx][ny] == 0){ // 가보지 않은 칸일 경우, 한 칸 전진
                a = nx;
                b = ny;
                break;
            }
        }
        if(a!=nx || b!=ny){ // 모두 이미 가본 칸이거나 바다로 되어있어서 전진하지 못 한 경우
            nx = a - dx[d];
            ny = b - dy[d];
            
            if(map[nx][ny] == 1) break; // 뒷칸이 바다라 못 가는 경우 종료
            else{ // 뒤로 이동
                a = nx;
                b = ny;
            }
        }
    }

    cout << cnt;
}