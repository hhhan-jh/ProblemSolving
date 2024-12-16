#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
    int n, m, k;
    cin>>n;
    
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>k;
        auto pos1 = upper_bound(a.begin(), a.end(), k);
        auto pos2 = lower_bound(a.begin(), a.end(), k);

        cout<<pos1-pos2<<" ";
    }
}