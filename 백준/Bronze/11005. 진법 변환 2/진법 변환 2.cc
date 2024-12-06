#include <iostream>
#include <stack>
using namespace std;
char change(int k){
    if(k<10) return '0'+k;
    else return 'A'+(k-10);
}
int main() {
    int n, b;
    cin>>n>>b;
    
    stack<char> st;
    while(n>0){
        st.push(change(n%b));
        n/=b;
    }
    
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}