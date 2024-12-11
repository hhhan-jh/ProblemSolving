#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	int k;
	cin >> k;

	int input[100000] = { 0 };
	int cnt = 0;
	for (int i = 0; i < k; i++){
		if (cnt == k) break;
		int num;
		cin >> num;

		if (num == 0) {
			input[i-1]=0;
			i -= 2;
		}
		else 
			input[i] = num;
		cnt++;
	}

	printf("%lld", accumulate(begin(input), end(input), 0));
}