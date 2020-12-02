#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N; 
	cin >> N;
	for (int i=0; i<N; i++) {
		int nOfBoxes;
		cin >> nOfBoxes;
		vector<int> arr;
		for (int j=0; j<nOfBoxes; j++) {
			int a;
			cin >> a;
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
	}
}