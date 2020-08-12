#include <iostream>
#include <string>

int Solver(int N){
	return (N%1000 == 0) ? 0 : 1000 - (N%1000);
}

int main(){
	int N;

	// Read input
	std::cin >> N;

	std::cout << Solver(N) << std::endl;
}