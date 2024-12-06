#include <iostream>

int	upper(double x) {
	int y = x;

	if (x != y) return y + 1;
	return y;
}
int main() {
	int a, b, v;
	std::cin >> a >> b >> v;
	double x = static_cast<double>((v - a)) / (a - b);

	std::cout << upper(x) + 1 << " ";
}