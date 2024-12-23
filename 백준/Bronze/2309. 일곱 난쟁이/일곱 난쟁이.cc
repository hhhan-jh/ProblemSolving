#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sum{0}, subsum;
vector<short> v(9);
    
void remove2(){
    for(int i=0;i<v.size();i++) {
        for(int j=i+1; j<v.size(); j++){
            int subsum = v[i] + v[j];
            if(sum-subsum == 100) {
                v.erase(v.begin()+j);
                v.erase(v.begin()+i);
                return;
            }
        }
    }
}

int main(){
    

    for(int i=0;i<9;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());
    remove2();
    for(int i=0;i<v.size();i++) cout<<v[i]<<"\n";
}