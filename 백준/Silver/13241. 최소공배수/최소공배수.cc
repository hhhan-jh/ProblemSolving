#include <iostream>
using namespace std;

int gcd(long long int a, long long int b){
    if(b==0)return a;
    return gcd(b, a%b);
}

int main(){
    long long int a, b;
    cin>>a>>b;
    cout<<a*b/gcd(a,b)<<"\n";
}