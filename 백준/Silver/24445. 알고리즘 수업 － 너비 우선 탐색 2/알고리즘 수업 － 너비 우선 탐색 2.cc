#include <iostream>
#include <vector> 
#include <queue>
#include <algorithm>

using namespace std;
bool cmp (int a, int b){return a>b;}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m, r, cnt{0};
    cin>>n >> m >> r;
    
    vector<vector<int>> g(n+1, vector<int>{});
    while(m--){
        int a, b;
        cin>>a>>b;
        
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        sort(g[i].begin(), g[i].end(), cmp);
    }
    
    vector<int> visited(n+1, 0);
    queue<int> q;
    q.push(r);
    visited[r] = ++cnt;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
    
        for(int i=0;i<g[cur].size();i++){
            int next = g[cur][i];
            if(!visited[next]) {
                q.push(next);
                visited[next]= ++cnt;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        cout<<visited[i]<<"\n";
    }
}