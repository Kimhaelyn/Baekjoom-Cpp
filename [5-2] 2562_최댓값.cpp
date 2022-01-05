#include <iostream>
using namespace std;

int main() {
	int array[9];
	int MaxValue = 0, index = 0;
	for (int i = 0; i < 9; i++) {
		cin >> array[i];
		if (MaxValue < array[i]) {
			MaxValue = array[i];
			index = i+1;
		}
	}
	cout << MaxValue << "\n" << index;

}