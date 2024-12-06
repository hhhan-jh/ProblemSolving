#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int res = 2; //init
    while(n--){
        res = res + (res-1);
    }
    cout<<res*res;
}