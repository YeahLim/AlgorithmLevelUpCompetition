// 백준 1269번 <대칭 차집합>
// 알고리즘 : 맵
#include <iostream>
#include <map>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// 입력부
	int N, M;
	cin >> N >> M;

	int input; int cnt = 0;
	map<int, int> A;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.insert({ input, 0 });
	}

	map<int, int> B;
	for (int i = 0; i < M; i++) {
		cin >> input;
		B.insert({ input, 0 });
	}

	for (map<int, int>::iterator itr = A.begin(); itr != A.end(); itr++) {
		if (B.find(itr->first) == B.end()) {
			cnt++;
		}
	}

	for (map<int, int>::iterator itr = B.begin(); itr != B.end(); itr++) {
		if (A.find(itr->first) == A.end()) {
			cnt++;
		}
	}

	// 출력부
	cout << cnt << '\n';

	return 0;
}