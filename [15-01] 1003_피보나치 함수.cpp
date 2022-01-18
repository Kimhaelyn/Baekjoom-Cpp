#include <iostream>
using namespace std;

int main() {
	int T, F[41] = { 0,1 };

	for (int i = 2; i <= 40; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}

	cin >> T;
	int N;

	for (int i = 0; i < T; i++) {
		cin >> N;
		if (N == 0)
			cout << "1 0" << '\n';
		else
			cout << F[N-1] << ' ' << F[N] << '\n';
	}
}