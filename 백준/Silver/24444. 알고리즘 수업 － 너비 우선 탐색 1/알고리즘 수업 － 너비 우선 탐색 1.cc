#include <iostream>
#include <vector> 
#include <queue>
#include <algorithm>

using namespace std;
int main() {
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
    if(g[r].size()==0) {
        cout<<0;
        return 0;
    }
    
    for(int i=1;i<g.size();i++){
        sort(g[i].begin(), g[i].end());
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
    
    for(int i=1;i<visited.size();i++){
        cout<<visited[i]<<"\n";
    }
}