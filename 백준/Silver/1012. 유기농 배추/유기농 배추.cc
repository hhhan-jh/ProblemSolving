#include <iostream>
#include <vector> 
#include <queue>
#include <algorithm>
using namespace std;

#define N 0 //배추없음
#define Y 1 //배추있음
#define F 2 //발견
#define V 3 //방문완료

int t, n, m, k;
vector<vector<int>> g(51, vector<int>(51));
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

bool isValid(int i, int j){
    if(i>=0 && i<n && j>=0 && j<m) return true;
    else return false;
}

int bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    
    int cnt = 0;
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        
        int curx = cur.first;
        int cury = cur.second;
        g[curx][cury] = V;
        cnt++;
        
        for(int i=0;i<4;i++){
            int nextx = cur.first + dx[i];
            int nexty = cur.second + dy[i];
            if(!isValid(nextx, nexty)) continue;
            if(g[nextx][nexty]==Y) {
                g[nextx][nexty]=F;
                q.push({nextx, nexty});
            }
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>t;
    while(t--){
        cin>>m>>n>>k;
        for(int i=0;i<n;i++) fill(g[i].begin(), g[i].end(), N);
        
        for(int i=0;i<k;i++) {
            int a, b;
            cin>>a>>b;
            g[b][a] = Y;
        }
        
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==Y) {
                    cnt++;
                    bfs(i, j);
                }
            }
        }
        cout<<cnt<<"\n";
    }
}