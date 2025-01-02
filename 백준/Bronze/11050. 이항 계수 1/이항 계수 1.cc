#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int p[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    int n, k; cin>>n>>k;
    cout<<p[n] / (p[k] * p[n-k]);
}