#include <iostream>
#include <string>

int Solver(int N) {
	int ans=0;
	if (N % 2 == 0) {
		return -1;
	}else{
		for (int i=1; i < 1000000; i++) {
			std::string a(i,'7');
			if (std::stoi(a) % N == 0) {
				return a.size();
			}
		}
	}

	

	return ans;
}

int main() {
	int N;
	int D;
	std::cin >> N;
	std::cout << Solver(N) << std::endl;
}