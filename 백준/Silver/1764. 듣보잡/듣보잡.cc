#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n,m;
    string s;
    vector<string> v, res;
    
    cin>>n>>m;
    while(n--){
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    
    while(m--){
        cin>>s;
        if(binary_search(v.begin(), v.end(), s))
            res.push_back(s);
    }
    sort(res.begin(), res.end());
    
    cout<<res.size()<<"\n";
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<"\n";
}