#include <iostream>
int main() {
    int x[3];
    int y[3];
    
    for(int i=0;i<3;i++){
        std::cin>>x[i]>>y[i];
    }
    
    int res_x = x[0] == x[1] ? x[2] :
        x[1] == x[2] ? x[0] : x[1];
    int res_y = y[0] == y[1] ? y[2] :
        y[1] == y[2] ? y[0] : y[1];
        
    std::cout<<res_x<<" "<<res_y;
}