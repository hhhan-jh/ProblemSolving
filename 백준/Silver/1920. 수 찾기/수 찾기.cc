#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
vector<int> a;

int find(int target){
    int st{0}, end{n-1}, mid;
    while(st<=end){
        mid = (st+end)/2;
        if(a[mid]==target) return 1;
        else if(a[mid]<target) st = mid + 1;
        else end = mid - 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>k;
        cout<<find(k)<<"\n";
    }
}