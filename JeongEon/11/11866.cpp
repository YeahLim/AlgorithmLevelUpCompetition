// 백준 11866번 <요세푸스 문제 0>
// 알고리즘 : 큐
#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	int K, N;
	cin >> N >> K;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	// 출력부
	cout << "<";
	while (q.size() != 0) {
		for (int i = 0; i < K - 1; i++) {
			q.push(q.front());
			q.pop();
		}

		if (!q.empty() && q.size() == 1) {
			cout << q.front();
			q.pop();
		}
		else {
			cout << q.front() << ", ";
			q.pop();
		}
	}
	cout << ">";

	return 0;
}