#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;

	vector<int> v(101);
	for (int i = 1; i <= n; i++){
		v[i] = i;
	}

	for (int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;

		int temp = v[a];
		v[a] = v[b];
		v[b] = temp;
	}

	for (int i = 1; i <= n; i++){
		cout << v[i] << " ";
	}
}