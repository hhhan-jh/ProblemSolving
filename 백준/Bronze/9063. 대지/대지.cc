#include <iostream>
#include <algorithm>
#define MAX 10001
#define MIN -10001
using namespace std;
int main() {
    int minx{MAX}, miny{MAX};
    int maxx{MIN}, maxy{MIN};
    
    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        minx = min(minx,a);
        miny = min(miny,b);
        maxx = max(maxx,a);
        maxy = max(maxy,b);
    }
    
    cout<<(maxx-minx)*(maxy-miny);
}