#include <iostream>
using namespace std;
int main() {
    bool paper[101][101] = {0,};
    
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        
        for(int i=b;i<b+10;i++){
            for(int j=a;j<a+10;j++){
                paper[i][j] = true;
            }
        }
    }
    
    int area = 0;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(paper[i][j]) area++;
        }
    }
    
    cout<<area;
}