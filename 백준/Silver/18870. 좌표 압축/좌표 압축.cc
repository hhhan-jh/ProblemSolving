#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    
    int n;
    cin>>n;
    
    vector<int> ori, sorted;
    while(n--){
        int input;
        cin>>input;
        ori.push_back(input);
        sorted.push_back(input);
    }
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
    
    for(int i=0; i<ori.size();i++){
        auto idx = lower_bound(sorted.begin(), sorted.end(), ori[i]);
        cout<<idx-sorted.begin()<<" ";
    }
}