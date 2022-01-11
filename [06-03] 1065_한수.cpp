#include <iostream>
#include <vector>
using namespace std;

bool A(int a){
	if (a < 100)
		return true;
	int a1, a2, a3;
	a1 = a / 100; //a의 100의 자리 수
	a2 = a % 100 / 10; //a의 10의 자리 수
	a3 = a % 10; //a의 1의 자리 수
	if (a3 - a2 == a2 - a1) //등차수열인지 판단
		return true;
	return false;
}

int main() {
	int n, c = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		if (A(i)) //100미만 자연수는 모두 true를 출력하여 c가 증가한다.
			c++;
	}
	cout << c;
}
