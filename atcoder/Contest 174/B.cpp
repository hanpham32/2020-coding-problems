#include <iostream>
#include <tgmath.h>

int Solver(int N, int D) {
	int ans=0;
	for (int i=0; i < N; i++) {
		int x1, y1;
		std::cin >> x1 >> y1;
		if (sqrt(pow(x1,2) + pow(y1,2)) <= D) {
			ans++;
		}
	}

	return ans;
}

int main() {
	int N;
	int D;
	std::cin >> N >> D;
	std::cout << Solver(N, D) << std::endl;
}