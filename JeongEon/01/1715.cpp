// 23회 알고리즘 스터디
// 백준 골드 4
// 1715. 카드 정렬하기

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> arr;
	for (int n = 1; n <= N; n++) {
		int input;
		cin >> input;
		arr.push(input);
	}

	int result = 0;
	while (arr.size() > 1) {
		int a = arr.top();
		arr.pop();
		int b = arr.top();
		arr.pop();

		int sum = a + b;
		result += sum;
		arr.push(sum);
	}

	cout << result << '\n';

	return 0;
}