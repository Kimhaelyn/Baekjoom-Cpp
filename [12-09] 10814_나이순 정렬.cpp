#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	int N;
	cin >> N;
	pair<int, string> temp;
	vector<pair<int, string>> array;
	for (int i = 0; i < N; i++) {
		cin >> temp.first >> temp.second;
		array.push_back(temp);
	}

	stable_sort(array.begin(), array.end(), compare);
	for (int i = 0; i < N; i++)
		cout << array[i].first << ' ' << array[i].second << '\n';
}