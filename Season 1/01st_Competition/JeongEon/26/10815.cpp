// 백준 10815번 <숫자 카드>
// 알고리즘 : 정렬
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	// 입력부
	int N;
	cin >> N;

	int input;
	vector<int> SangGeun;
	for (int i = 0; i < N; i++) {
		cin >> input;
		SangGeun.push_back(input);
	}

	stable_sort(SangGeun.begin(), SangGeun.end());

	int M;
	cin >> M;

	vector<int> compare;
	for (int i = 0; i < M; i++) {
		cin >> input;
		compare.push_back(input);
	}

	// 출력부
	for (int i = 0; i < M; i++) {
		if (binary_search(SangGeun.begin(), SangGeun.end(), compare[i])) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}
	cout << '\n';

	return 0;
}