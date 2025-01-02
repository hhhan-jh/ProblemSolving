#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    string s;
    map<string, int> pton;
    map<int,string> ntop;
    
    cin>>n>>m;
    for(int i=1;i<n+1;i++){
        cin>>s;
        pton[s]=i;
        ntop[i]=s;
    }
    
    while(m--){
        cin>>s;
        try{
            cout<<ntop[stoi(s)]<<"\n";
        }catch(invalid_argument){
            cout<<pton[s]<<"\n";
        }
    }
}