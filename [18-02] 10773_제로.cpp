#include <iostream>
#include <stack>
using namespace std;

int main() {
	int K, n;
	stack<int> st;
	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> n;
		if (n == 0) {
			st.pop();
		}
		else
			st.push(n);
	}

	int sum = 0;
	int size = st.size();
	for (int i = 0; i < size; i++) {
		sum = sum + st.top();
		st.pop();
	}
	cout << sum << '\n';
}