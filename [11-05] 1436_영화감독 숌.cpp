#include <iostream>
#include <string>
using namespace std;

int main() {
	int start = 666, a = 0, temp, n;
	cin >> n;

	while (1) {
		temp = start;

		do {
			if (temp % 1000 == 666) {
				a++;
				break;
			}
			temp = temp / 10;
		} while (temp > 0);

		if (a == n) {
			cout << start << "\n";
			break;
		}
		start++;
	}
	return 0;
}