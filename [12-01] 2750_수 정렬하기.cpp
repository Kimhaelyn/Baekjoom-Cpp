#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	int num[1000];
	int temp;

	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i; j < N; j++) {
			if (num[i] > num[j]) {
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}

		
	}
	for (int i = 0; i < N; i++) {
			cout << num[i] << "\n";
		}

}