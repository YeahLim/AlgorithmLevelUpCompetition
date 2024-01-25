// 백준 24511번 <queuestack>
// 알고리즘 : 스택, 큐
#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	int N;
	cin >> N;

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int input;
	deque<int> dq;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (arr[i] == 0) {
			dq.push_back(input);
		}
	}

	int M;
	cin >> M;

	// 출력부
	for (int i = 0; i < M; i++) {
		cin >> input;
		dq.push_front(input);
		cout << dq.back() << " ";
		dq.pop_back();
	}


	return 0;
}