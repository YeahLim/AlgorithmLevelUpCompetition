// 코테 알고리즘 스터디 16회차
// SWEA D3
// 8931. 제로

#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int K;
		cin >> K;

		stack<int> s;
		for (int i = 0; i < K; i++) {
			int input;
			cin >> input;
			if (input == 0) {
				s.pop();
			}
			else {
				s.push(input);
			}
		}

		int size = s.size();
		int result = 0;
		for (int i = 0; i < size; i++) {
			result += s.top();
			s.pop();
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}
}