#include <iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int pairs = 1, bpairs=0, grownpairs = 1, readytomate=1;
	int temp, count = 3;
	if (n < 3) {
		cout << 2;
	} else {
		while (count <= n) {
			grownpairs += bpairs;
			bpairs = readytomate * k;
			readytomate = pairs;
			pairs = readytomate + pairs;

			cout << "MONTH: " << count << endl;
			cout << "TOTAL PAIRS: " << pairs << endl;
			cout << "BABY PAIRS: " << bpairs << endl;
			cout << "grownpairs PAIRS: " << bpairs << endl;
			cout << "readytomate PAIRS: " << bpairs << endl;
			cout << "------------------" << endl;
			count++;
		}
		
	} cout << pairs << endl;

}