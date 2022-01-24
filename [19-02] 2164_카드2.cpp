#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0); //���� ������� ���� �ڵ�
	
	int N; //ī�� �� ��
	queue<int> q;

	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		q.push(i); //1���� N������ ���� ť�� �ڿ� ���ʴ�� �Է��Ѵ�.(������������ ���ĵ�)
	}

	while (q.size() > 1) {
		q.pop(); //ť�� �� �� ���� ������.
		q.push(q.front()); //ť�� �� ���� ���� �� �ڿ� �Է���.
		q.pop(); //ť�� �� �� ���� ������.
	}

	cout << q.front() << '\n';
}