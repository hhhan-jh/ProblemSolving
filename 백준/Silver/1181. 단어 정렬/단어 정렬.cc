#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<map<string, int>> v(51);
    while(n--){
        string s;
        cin>>s;
        
        v[s.size()].insert({s, 0});
    }
    
    for(int i=1;i<v.size();i++){
        for(auto iter=v[i].begin();iter!=v[i].end();iter++){
            cout<<iter->first<<endl;
        }
    }
}