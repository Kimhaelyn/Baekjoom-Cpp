#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		for (int a = 1; a <= n - i; a++) {
			cout << " ";
		}

		for (int b = 1; b <= i; b++) {
			cout << "*";
		}

		cout << "\n";
	}
	return 0;
}
