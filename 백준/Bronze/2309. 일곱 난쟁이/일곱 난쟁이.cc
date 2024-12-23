#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int sum{0};
    vector<short> v(9);
    for(int i=0;i<9;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());
    
    for(int i=0;i<v.size();i++) {
        for(int j=i+1; j<v.size(); j++){
            if(sum-(v[i] + v[j]) == 100) {
                for(int k=0;k<v.size();k++) 
                    if(k!=i && k!=j) cout<<v[k]<<"\n";
                return 0;
            }
        }
    }
}