#include <iostream>
using namespace std;
int f(int k){
    int res = k;
    while(k>0){
        res+=k%10;
        k/=10;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<n;i++){
        int temp = f(i);
        if(temp==n){
            cout<<i;
            return 0;
        }
    }
    cout<<0;
}