#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b, a%b);
}

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    int newNume = a*d + c*b;
    int newDeno = b*d;
    int m = gcd(newNume, newDeno);
    
    cout<<newNume/m<<" "<<newDeno/m;
}