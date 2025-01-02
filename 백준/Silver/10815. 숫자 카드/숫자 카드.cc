#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m,k;
    vector<int> v;
    
    cin>>n;
    while(n--){
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    
    cin>>m;
    while(m--){
        cin>>k;
        if(binary_search(v.begin(), v.end(), k))
            cout<<"1 ";
        else
            cout<<"0 ";
    }
    return 0;
}