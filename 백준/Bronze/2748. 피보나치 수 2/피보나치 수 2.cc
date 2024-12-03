#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<long long> pibo(91);
    pibo[0]=0;
    pibo[1]=1;
    pibo[2]=1;
    
    for(int i=3; i<=n; i++){
        pibo[i] = pibo[i-1] + pibo[i-2];
    }
    
    cout<<pibo[n];
}