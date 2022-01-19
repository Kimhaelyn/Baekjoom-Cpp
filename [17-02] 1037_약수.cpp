#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num; //약수의 개수
	int real[50]; //진짜 약수
	int min, max; //약수의 최솟값, 최댓값
	
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> real[i];
	}

	sort(real, real + num); //입력받은 진짜 약수 오름차순 정렬

	min = real[0]; //진짜 약수 중 제일 작은 수를 최솟값으로 설정
	max = real[num - 1];

	cout << min * max << '\n'; //최솟값과 최댓값을 곱한 것이 N이다.
}