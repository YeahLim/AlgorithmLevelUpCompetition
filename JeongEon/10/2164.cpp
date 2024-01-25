// 백준 2164번 <카드2>
// 알고리즘 : 큐
#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() != 1) {
		q.pop();
		if (q.size() == 1) {
			break;
		}
		q.push(q.front());
		q.pop();
	}

	// 출력부
	cout << q.front();

	return 0;
}