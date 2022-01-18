#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 21;

int a, b, c;
int arr[MAX][MAX][MAX];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	else if (a >= MAX || b >= MAX || c >= MAX)
		return w(20, 20, 20);

	int &res = arr[a][b][c];
	if (res != 0)
		return res;

	if (a < b&&b < c)
		res = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else
		res = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return res;
}

int main() {
	while (1) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
			break;

		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}
}