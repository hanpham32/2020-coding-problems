#include <iostream>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;
	(M*N%2 == 0) ? cout << M*N/2 << endl : cout << int((M*N/2)) << endl;
}
