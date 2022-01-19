#include <iostream>
#include <algorithm> //sort 함수 사용
using namespace std;

const int MAX = 1000;
int N;
int p[MAX];

int main() {
	cin >> N; //사람 수

	for (int i = 0; i < N; i++) {
		cin >> p[i]; //i번 사람이 돈을 인출하는데 걸리는 시간
	}

	sort(p, p + N); //p부터 p+N까지 정렬
	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum = sum + p[i] * (N - i);
	}
	
	cout << sum << '\n';
}

//돈을 인출하는데 걸리는 시간이 짧은 사람부터 정렬해서 더하면 걸리는 시간이 최소가 된다!