#include <iostream>
using namespace std;

long long func(long long a, long long b, long long c){
    if(b==1) return a%c;
    
    long long temp = func(a, b/2, c)%c;
    if(!(b%2)) return (temp*temp)%c; //짝수
    else return (temp*temp)%c*a%c; //홀수
}

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    
    cout<<func(a,b,c);
}