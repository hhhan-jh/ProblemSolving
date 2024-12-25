#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> g;
vector<int> visited;
int cnt = 0;
void dfs(int cur){
    for(int i=0;i<g[cur].size();i++){
        int next = g[cur][i];
        if(!visited[next]) {
            visited[next] = ++cnt;
            dfs(next);
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m, r;
    cin>>n>>m>>r;
    
    for(int i=0;i<n+1;i++) {
        g.push_back(vector<int>{});
        visited.push_back(0);
    }
    
    while(m--){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    for(int i=1;i<g.size();i++) {
        sort(g[i].begin(), g[i].end());
    }
    
    visited[r] = ++cnt;
    dfs(r);
    for(int i=1;i<visited.size();i++) {
        cout<<visited[i]<<"\n";
    }
    
}