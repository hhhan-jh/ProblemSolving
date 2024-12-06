#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        
        int q=c/25;
        c-=q*25;
        
        int d=c/10;
        c-=d*10;
        
        int n=c/5;
        c-=n*5;
        
        int p=c/1;
        
        cout<<q<<" "<<d<<" "<<n<<" "<<p<<endl;
    }
}