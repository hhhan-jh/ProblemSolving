#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, string> p;
bool cmp(p p1, p p2){
    return p1.first < p2.first;
}
int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
	cin>>n;
	
	vector<p> v;
	while(n--){
	    int age;
	    string name;
	    cin>>age>>name;
	    v.push_back({age, name});
	}
	stable_sort(v.begin(), v.end(), cmp);
	
	for(int i=0;i<v.size();i++){
	    cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
}
