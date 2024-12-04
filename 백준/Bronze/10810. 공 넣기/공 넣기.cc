#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;

	vector<int> basket(101);
	for (int t = 0; t < m; t++){
		int i, j, k;
		cin >> i >> j >> k;

		for (int cur = i; cur <= j; cur++) {
			basket[cur] = k;
		}
	}

	for (int i = 1; i <= n; i++){
		cout << basket[i] << " ";
	}
}