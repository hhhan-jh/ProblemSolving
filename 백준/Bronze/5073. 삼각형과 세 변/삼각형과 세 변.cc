#include <iostream>
using namespace std;
int main() {
    while(true){
        int a, b, c;
        cin>>a>>b>>c;
        
        if(a==0&&b==0&&c==0) return 0;
        
        if(a>=b+c||b>=a+c||c>=a+b) cout<<"Invalid\n";
        else if(a==b&&b==c) cout<<"Equilateral\n";
        else if(a!=b&&b!=c&&c!=a) cout<<"Scalene\n";
        else cout<<"Isosceles\n";
    } 
}