#include <iostream>
#include <map>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m, k;
    map<int, int> mapp;
    
    cin>>n>>m;
    while(n--){
        cin>>k;
        mapp[k]=1; //a-b
    }
    
    while(m--){
        cin>>k;
        if(mapp.find(k) != mapp.end()) mapp[k] = 3; //a∩b
        else mapp[k] = 2; //b-a
    }
    
    int total{0}, cnt{0};
    for(auto i=mapp.begin();i!=mapp.end();i++){
        if(i->second==3) cnt++;
        total++;
    }
    cout<<total-cnt; //n(a-b)+n(b-a) == n(a∪b)-n(a∩b)
}
