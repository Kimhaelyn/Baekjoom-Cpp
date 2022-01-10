#include <iostream>
using namespace std;

int main() {
	int M, N;
	int sum = 0, min = -1;
	int s = 0;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (i%j == 0)
				s++;
		}
		if (s == 2) {
			if (min == -1)
				min = i;
			sum += i;
		}
		s = 0;
	}
	if (min == -1)
		cout << -1 << "\n";
	else
		cout << sum << "\n" << min << "\n";
}