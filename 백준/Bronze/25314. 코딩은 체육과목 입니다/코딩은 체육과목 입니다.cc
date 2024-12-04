#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;

	while (n > 1) {
		cout << "long ";
		n -= 4;
	}
	cout << "int";
}