#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t = 5;
    vector<vector<char>> v;

    while(t--){
        string s;
        cin>>s;

        for(int i=0;i<s.size();i++){
            if(i==v.size()) v.push_back(vector<char>());
            v[i].push_back(s[i]);
        }
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
        }
    }
}