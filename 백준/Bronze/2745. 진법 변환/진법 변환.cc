#include <iostream>
#include <cmath>
using namespace std;
int getNum(char s) {
	if (s >= 'A' && s <= 'Z') return s - 'A' + 10;
	else return s - '0';
}
int main() {
	string n; int b;
	cin >> n >> b;

	int res = 0;
	for (int i = 0; i < n.size(); i++){
		res = res * b + getNum(n[i]);
	}
	cout << res;
}