/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
    int r = a%b;
    return (r==0 ? b : gcd(b, r));
}

int main(){
    int n, k;
    cin>>n;
    
    vector<int> v1, v2;
    for(int i=0;i<n;i++){
        cin>>k;
        v1.push_back(k);
    }
    sort(v1.begin(), v1.end());
    
    for(int i=0;i<v1.size()-1;i++)
        v2.push_back(v1[i+1]-v1[i]);
    
    int g{v2[0]}, cnt{0};
    for(int i=1;i<v1.size()-1;i++)
        g = gcd(g, v2[i]);
    for(int i=0;i<v1.size()-1;i++)
        cnt+=v2[i]/g-1;
    
    cout<<cnt;
}