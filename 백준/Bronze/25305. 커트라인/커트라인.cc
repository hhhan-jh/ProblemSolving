#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, k;
    cin>>n >> k;
    
    vector<int> score(n);
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    sort(score.begin(), score.end());
    
    cout<<score[score.size()-k];
}