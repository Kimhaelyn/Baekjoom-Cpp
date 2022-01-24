#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(0); //빠른 입출력을 위한 코드
	
	int N, num; 
	queue<int> q;
	string str;
	cin >> N; //N: 명령의 수
	
	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push") { //큐의 맨 뒤에 원소 추가
			cin >> num; //num: 큐 맨뒤에 추가할 원소
			q.push(num);
		}
		else if (str == "pop") { //큐의 맨 앞 원소 삭제
			if (q.size() == 0) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "size") { //큐 사이즈 반환
			cout << q.size() << '\n';
		}
		else if (str == "empty") { //큐가 비어있는지 확인
			if (q.empty()) {
				cout << "1" << '\n';
			}
			else cout << "0" << '\n';
		}
		else if (str == "front") { //큐의 맨 앞 원소 반환
			if (q.size() == 0)
				cout << "-1" << '\n';
			else cout << q.front() << '\n';
		}
		else if (str == "back") { //큐의 맨 뒤 원소 반환
			if (q.size() == 0)
				cout << "-1" << '\n';
			else cout << q.back() << '\n';
		}
	}
}