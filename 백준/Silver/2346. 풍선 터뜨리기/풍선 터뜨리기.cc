#include <iostream>
#include <utility>
#include <deque>

using namespace std;

int n;
deque<pair<short, short>> dq;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		int k;
		cin >> k;
		dq.push_back({k, i});
	}
    
	while (true) {
		int cur = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();
		
		if (dq.empty()) break;
		
		if (cur > 0) {
			for (int i = 0; i < cur - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			for (int i = cur; i < 0; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}