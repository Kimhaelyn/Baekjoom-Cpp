#include <iostream>
using namespace std;

int hap(int n) {
	int sum = n;
	while (n) {
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int sum = hap(i);
		if (sum == N) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << 0 << "\n";
}