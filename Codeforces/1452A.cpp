#include <iostream>

int main(){
	int N;
	int X, Y;
	std::cin >> N;
	for (int i=0; i<N; i++) {
		int count = 0;
		std::cin >> X;
		std::cin >> Y;

		int a = (X<Y) ? X : Y;
		int b = (X<Y) ? Y : X;
		count += a*2;
		if ((b-a)*2 != 0) {
			count += ((b-a)*2)-1;
		}
		std::cout << count << std::endl;
	} 
}