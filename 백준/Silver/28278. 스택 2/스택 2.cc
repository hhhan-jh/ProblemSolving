#include <iostream>
using namespace std;

int n, option, i{-1};
int st[1000000];

void f(int option){
    switch(option){
        case 1:
            int x;
            cin>>x;
            st[++i]=x;
            break;
        case 2:
            if(i<0) cout<<"-1\n";
            else cout<<st[i--]<<"\n";
            break;
        case 3:
            cout<<i+1<<"\n";
            break;
        case 4:
            if(i<0) cout<<"1\n";
            else cout<<"0\n";
            break;
        case 5:
            if(i<0) cout<<"-1\n";
            else cout<<st[i]<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    cin>>n;
    while(n--){
        cin>>option;
        f(option);
    }
}