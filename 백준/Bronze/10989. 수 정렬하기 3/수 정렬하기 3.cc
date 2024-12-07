#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(10001);
    while(n--){
        short a;
        cin>>a;
        v[a]++;
    }
    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[i];j++){
            cout<<i<<"\n";
        }
    } 
}