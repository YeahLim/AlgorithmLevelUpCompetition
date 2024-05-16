// 코테 알고리즘 스터디 17회차
// SWEA D3
// 1234. [S/W 문제해결 기본] 10일차 - 비밀번호

#include <iostream>
#include <string>
#include <stack>
#include <deque>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC = 10;
	// cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N;
		string input;
		cin >> N >> input;

		stack <char> stac;
		for (int i = 0; i < N; i++) {
			if (!stac.empty()) {
				if (stac.top() == input[i]) {
					stac.pop();
					continue;
				}
			}
			stac.push(input[i]);
		}

		deque<char> deq;
		int size = stac.size();

		for (int i = 0; i < size; i++) {
			deq.push_front(stac.top());
			stac.pop();
		}

		cout << "#" << tc << " ";
		for (int i = 0; i < deq.size(); i++) {
			cout << deq[i];
		}
		cout << '\n';
	}

	return 0;
}