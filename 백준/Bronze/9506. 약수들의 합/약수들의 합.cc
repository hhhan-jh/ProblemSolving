#include <iostream>
#include <vector>
using namespace std;

int main() {
	while(true){
		int n;
		cin >> n;

		if (n == -1) break;

		vector<int> v; //약수 집합
		int sum = 0; //약수 합
		for (int i = 1; i < n; i++){
			if (!(n % i)) {
				v.push_back(i);
				sum += i;
			}
		}

		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < v.size(); i++) {
				if (i == v.size() - 1) cout << v[i] << endl;
				else cout << v[i] << " + ";
			}
		}
		else cout << n << " is NOT perfect." << endl;
	}
}