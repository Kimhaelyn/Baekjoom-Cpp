#include <iostream>
using namespace std;

int main() {
	while(1){
		int a, b, c;
		int temp;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			return 0;

		if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}

		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}

		if (c*c == a * a + b * b)
			cout << "right" << "\n";
		else
			cout << "wrong" << "\n";
	}
}
