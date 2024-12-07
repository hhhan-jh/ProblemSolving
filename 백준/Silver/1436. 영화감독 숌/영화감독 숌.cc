#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isEnd(int n){
    vector<int> capi;
    while(n>0){
        capi.push_back(n%10);
        n/=10;
    }
    
    for(int i=0; i<capi.size()-2;i++){
        if(capi[i]==6){
            if(capi[i+1]==6){
                if(capi[i+2]==6) return true;
                else i+=2;
            }else i+=1;
        }else continue;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    
    long long i;
    for(i=666;n>0;i++){
        if(isEnd(i)) n--;
    }
    cout<<i-1;
}