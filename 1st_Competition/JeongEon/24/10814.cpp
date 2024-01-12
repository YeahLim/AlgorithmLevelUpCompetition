// 백준 10814번 <나이순 정렬>
// 알고리즘 : 정렬
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main(void) {
	// 입력부
	int N;
	cin >> N;

	pair<int, string> temp;
	vector<pair<int, string>> vec;
	for (int i = 0; i < N; i++) {
		cin >> temp.first >> temp.second;
		vec.push_back(temp);
	}

	// 정렬
	stable_sort(vec.begin(), vec.end(), compare);

	// 출력부
	for (int i = 0; i < N; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}

	return 0;
}
