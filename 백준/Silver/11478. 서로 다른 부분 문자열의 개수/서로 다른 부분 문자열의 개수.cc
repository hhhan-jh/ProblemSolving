#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    set<string> sett;
    for(int i=0;i<s.size();i++){
        for(int j=1;j<=s.size()-i;j++){
            sett.insert(s.substr(i, j));
        }
    }
    cout<<sett.size();
}