#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num; //����� ����
	int real[50]; //��¥ ���
	int min, max; //����� �ּڰ�, �ִ�
	
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> real[i];
	}

	sort(real, real + num); //�Է¹��� ��¥ ��� �������� ����

	min = real[0]; //��¥ ��� �� ���� ���� ���� �ּڰ����� ����
	max = real[num - 1];

	cout << min * max << '\n'; //�ּڰ��� �ִ��� ���� ���� N�̴�.
}