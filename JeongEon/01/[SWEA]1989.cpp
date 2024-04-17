// 13회 알고리즘 스터디
// SWEA
// 1989. 초심자의 회문 검사


#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		string input;
		cin >> input;

		deque<char> deq;
		for (int i = 0; i < input.length(); i++) {
			deq.push_back(input[i]);
		}

		int result = 1;
		while (!deq.empty()) {
			if (deq.size() == 1) {
				result = 1;
				break;
			}

			if (deq.front() == deq.back()) {
				deq.pop_front();
				deq.pop_back();
			}
			else {
				result = 0;
				break;
			}
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}