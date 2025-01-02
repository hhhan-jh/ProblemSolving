#include <iostream>
#include <map>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string s1, s2;
    map<string, bool, greater<string>> m;
    
    cin>>n;
    while(n--){
        cin>>s1>>s2;
        if(s2=="enter") m[s1]=true;
        else m[s1] = false;
    }
    
    for(auto i = m.begin(); i!=m.end(); i++){
        if(i->second) cout<<i->first<<"\n";
    }
}