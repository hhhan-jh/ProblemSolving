#include <iostream>
#include <vector> 
#include <queue>

using namespace std;
int main() {
    int n, m;
    cin>>n >> m;
    
    vector<vector<int>> g(n+1, vector<int>{});
    while(m--){
        int a, b;
        cin>>a>>b;
        
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    vector<bool> visited(n+1, false);
    queue<int> q;
    int cnt = -1;
    
    q.push(1);
    visited[1]=true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        
        for(int i=0;i<g[cur].size();i++){
            int next = g[cur][i];
            if(!visited[next]) {
                q.push(next);
                visited[next]=true;
            }
        }
        cnt++;
    }
    cout<<cnt;
}