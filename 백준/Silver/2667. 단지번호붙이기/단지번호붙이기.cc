#include <iostream>
#include <vector> 
#include <queue>
#include <algorithm>
using namespace std;

#define N 0 //집없음
#define Y 1 //집있음
#define F 2 //발견
#define V 3 //방문완료
    
int n;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
vector<int> each_cnt;
vector<vector<int>> g;

bool isValid(int i, int j){
    if(i>=0 && i<n && j>=0 && j<n) return true;
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
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        g.push_back({});
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            g[i].push_back(s[j]-'0');
        }
    }
    
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(g[i][j]==Y) {
                cnt++;
                each_cnt.push_back(bfs(i,j));
            }
        }
    }
    sort(each_cnt.begin(), each_cnt.end());
    
    cout<<cnt<<"\n";
    for(int i=0;i<each_cnt.size();i++){
        cout<<each_cnt[i]<<"\n";
    }
    
}