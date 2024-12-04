#include <iostream>
using namespace std;
int main() {
	while (true) {
		string s;
		getline(cin, s);
		
		if (s == "") return 0;
		cout << s << endl;
	}
}