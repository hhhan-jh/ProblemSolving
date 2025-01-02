#include <iostream>
#include <set>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m, k;
    set<int> uni, inter;
    
    cin>>n>>m;
    while(n--){
        cin>>k;
        uni.insert(k);
    }
    
    while(m--){
        cin>>k;
        if(uni.find(k)!=uni.end()) inter.insert(k);
        uni.insert(k);
    }
    
    cout<<uni.size() - inter.size();
}