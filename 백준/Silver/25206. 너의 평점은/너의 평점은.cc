#include <iostream>
#include <string>
using namespace std;
double getScore(string s) {
	if (s == "F") return 0;

	double score = 'E' - s[0];
	if (s[1] == '+') score += 0.5;

	return score;
}
int main() {
	int cnt = 0;
	double sum = 0;
	for (int i = 0; i < 20; i++){
		string a, b, c;
		cin >> a >> b >> c;

		if (c == "P") continue;
		
		cnt += stod(b);
		sum += (stod(b) * getScore(c));
	}
	cout << sum / cnt;
}