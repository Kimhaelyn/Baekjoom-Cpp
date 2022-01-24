#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0); //빠른 입출력을 위한 코드
	
	int N; //카드 장 수
	queue<int> q;

	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		q.push(i); //1부터 N까지의 수를 큐의 뒤에 차례대로 입력한다.(오름차순으로 정렬됨)
	}

	while (q.size() > 1) {
		q.pop(); //큐의 맨 앞 수를 삭제함.
		q.push(q.front()); //큐의 맨 앞의 수를 맨 뒤에 입력함.
		q.pop(); //큐의 맨 앞 수를 삭제함.
	}

	cout << q.front() << '\n';
}