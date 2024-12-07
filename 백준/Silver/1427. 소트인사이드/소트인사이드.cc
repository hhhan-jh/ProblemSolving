#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> capi;
    while(n>0){
        capi.push_back(n%10);
        n/=10;
    }
    sort(capi.begin(), capi.end());
    
    for(int i=capi.size()-1;i>=0;i--){
        cout<<capi[i];
    }
}