#include <iostream>
using namespace std;

int main() {
	int i, N;
	int count = 0;
	cin >> i;

	N = i;

	do {
		N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;

		count++;
	} while (i != N);

	cout << count;
	return 0;
}