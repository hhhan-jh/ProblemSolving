#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int,int> pos;

bool cmp(pos p1, pos p2){
    if(p1.second == p2.second) return p1.first < p2.first;
    else return p1.second < p2.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;
    
    vector<pos> v;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), cmp);
    
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}