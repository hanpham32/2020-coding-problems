#include <iostream>
#include <vector>

using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition (vector<int> arr, int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);

	for (int j=low; j<=high - 1; j++) {
		if (arr[j] < pivot) {
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[high]);
	return i+1;
}

void QuickSort(vector<int> arr, int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);

		QuickSort(arr, low, pi-1);
		QuickSort(arr, pi+1, high);
	}

	cout << "low == high" << endl;
}

int main(){
	cout << "ok?";
	vector<int> v = {7,5,1,3,6,8,2};

	for (int x : v) {
		cout << x << " ";
	}
}