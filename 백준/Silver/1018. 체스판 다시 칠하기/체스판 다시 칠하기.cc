#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<string> v;
int f(int x, int y){
    string temp_odd = "WBWBWBWB";
    string temp_even = "BWBWBWBW";
    int cnt=0;
    //홀수번째 탐색
    for(int i=x;i<x+8;i+=2){
        for(int j=y;j<y+8;j++){
            if(v[i][j]!=temp_odd[j-y])cnt++;
        }
    }
    //짝수번째 탐색
    for(int i=x+1;i<x+8;i+=2){
        for(int j=y;j<y+8;j++){
            if(v[i][j]!=temp_even[j-y])cnt++;
        }
    }
    return min(cnt, 64-cnt);
}
int main(){
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    
    int res = 64;
    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            res = min(res, f(i,j));
        }
    }
    cout<<res;
}