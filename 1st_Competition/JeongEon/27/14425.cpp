// 백준 14425번 <문자열 집합>
// 알고리즘 : 맵
#include <iostream>
#include <map>
using namespace std;

int main(void) {
	// 입력부
	int N, M;
	cin >> N >> M;

	string input;
	map<string, bool> S;
	for (int i = 0; i < N; i++) {
		cin >> input;
		S.insert(pair<string, bool>(input, true));
	}

	// 출력부
	int cnt = 0;
	for (int i = 0; i < M; i++) {
		cin >> input;
		if (S[input] == true) {
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}