#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0); //���� ������� ���� �ڵ�
	
	int N, num; 
	queue<int> q;
	string str;
	cin >> N; //N: ����� ��
	
	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push") { //ť�� �� �ڿ� ���� �߰�
			cin >> num; //num: ť �ǵڿ� �߰��� ����
			q.push(num);
		}
		else if (str == "pop") { //ť�� �� �� ���� ����
			if (q.size() == 0) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "size") { //ť ������ ��ȯ
			cout << q.size() << '\n';
		}
		else if (str == "empty") { //ť�� ����ִ��� Ȯ��
			if (q.empty()) {
				cout << "1" << '\n';
			}
			else cout << "0" << '\n';
		}
		else if (str == "front") { //ť�� �� �� ���� ��ȯ
			if (q.size() == 0)
				cout << "-1" << '\n';
			else cout << q.front() << '\n';
		}
		else if (str == "back") { //ť�� �� �� ���� ��ȯ
			if (q.size() == 0)
				cout << "-1" << '\n';
			else cout << q.back() << '\n';
		}
	}
}