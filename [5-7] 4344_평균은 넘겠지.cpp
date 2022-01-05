#include <iostream>
using namespace std;

int main() {
	int Case, Snum, avg;
	int	count;
	int Array[1000] = { 0 };
	double result;

	cin >> Case;
	for (int i = 0; i < Case; i++) {
		avg = 0;
		count = 0;
		cin >> Snum;
		for (int j = 0; j < Snum; j++) {
			cin >> Array[j];
			avg += Array[j];
		}
		avg = avg / Snum;
		for (int j = 0; j < Snum; j++) {
			if (Array[j] > avg)
				count++;
		}
		result = (double)count / Snum * 100;

		cout << fixed;
		cout.precision(3);
		cout << result << "%" << "\n";
	}
}