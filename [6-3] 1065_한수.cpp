#include <iostream>
#include <vector>
using namespace std;

bool A(int a){
	if (a < 100)
		return true;
	int a1, a2, a3;
	a1 = a / 100; //a�� 100�� �ڸ� ��
	a2 = a % 100 / 10; //a�� 10�� �ڸ� ��
	a3 = a % 10; //a�� 1�� �ڸ� ��
	if (a3 - a2 == a2 - a1) //������������ �Ǵ�
		return true;
	return false;
}

int main() {
	int n, c = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		if (A(i)) //100�̸� �ڿ����� ��� true�� ����Ͽ� c�� �����Ѵ�.
			c++;
	}
	cout << c;
}