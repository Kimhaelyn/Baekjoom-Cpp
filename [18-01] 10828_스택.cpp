#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int N;
	stack<int> st;
	string str;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (str == "pop") {
			if (!st.empty()) {
				cout << st.top() << '\n';
				st.pop();
			}
			else
				cout << "-1" << '\n';
		}
		else if (str == "size") {
			cout << st.size() << '\n';
		}
		else if (str == "empty") {
			if (st.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (str == "top") {
			if (!st.empty()) {
				cout << st.top() << '\n';
			}
			else {
				cout << "-1" << '\n';
			}
		}
	}
}