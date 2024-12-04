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

		int len = b - a;
		if (len == 0) continue;
		for (int j = 0; j <= len/2; j++){
			int temp = v[a + j];
			v[a + j] = v[b - j];
			v[b - j] = temp;
		}
		
	}

	for (int i = 1; i <= n; i++){
		cout << v[i] << " ";
	}
}