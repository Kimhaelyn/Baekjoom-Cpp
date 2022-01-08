#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	string alp = "abcdefghijklmnopqrstuvwxyz";

	cin >> S;

	for (int i = 0; i < alp.length(); i++) {
		cout << (int)S.find(alp[i]) << " ";
	}
}