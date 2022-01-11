#include <iostream>
using namespace std;

int Factorial(int n) {
	if (n <= 1)
		return 1;
	n = n * Factorial(n - 1);
	return n;
}

int main() {
	int N;
	cin >> N;
	cout << Factorial(N) << "\n";
}