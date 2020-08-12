#include <iostream>

std::string Solver(int n) {
	return (n >= 30) ? "Yes" : "No";
}

int main() {
	int n;
	std::cin >> n;
	std::cout << Solver(n) << std::endl;
}