#include <iostream>
#include <set>
using namespace std;
int main(){
    int n, m, cnt{0};
    string input;
    set<string> s;
    
    cin>>n>>m;
    while(n--){
        cin>>input;
        s.insert(input);
    }
    
    while(m--){
        cin>>input;
        if(s.find(input)!=s.end()) cnt++;
    }
    
    cout<<cnt;
}