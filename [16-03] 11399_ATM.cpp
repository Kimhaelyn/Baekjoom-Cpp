#include <iostream>
#include <algorithm> //sort �Լ� ���
using namespace std;

const int MAX = 1000;
int N;
int p[MAX];

int main() {
	cin >> N; //��� ��

	for (int i = 0; i < N; i++) {
		cin >> p[i]; //i�� ����� ���� �����ϴµ� �ɸ��� �ð�
	}

	sort(p, p + N); //p���� p+N���� ����
	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum = sum + p[i] * (N - i);
	}
	
	cout << sum << '\n';
}

//���� �����ϴµ� �ɸ��� �ð��� ª�� ������� �����ؼ� ���ϸ� �ɸ��� �ð��� �ּҰ� �ȴ�!