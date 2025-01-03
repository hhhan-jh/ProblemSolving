#include <iostream>
using namespace std;
int main(){
    int t, n, m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        long long res{1}, k{1};
        for(int i=m;i>m-n;i--,k++){
            res*=i;
            res/=k;
        }
        cout<<res<<"\n";
    }
}