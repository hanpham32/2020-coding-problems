#include <iostream>
#include <string>
#include <algorithm>
#include <map>

int Solver(int N){
	std::map<std::string, int> M =  {
		{"AC", 0},
		{"WA", 0},
		{"TLE", 0},
		{"RE", 0}
	};
	for (int i = 0; i < N; ++i) {
		std::string s;
		std::cin >> s;
		M[s]++;
	}
	std::cout << "AC x " << M.at("AC") << std::endl;
	std::cout << "WA x " << M.at("WA") << std::endl;
	std::cout << "TLE x " << M.at("TLE") << std::endl;
	std::cout << "RE x " << M.at("RE") << std::endl;
	return 1;
}

int main(){
	int N;

	// Read input
	std::cin >> N;

	Solver(N);
}