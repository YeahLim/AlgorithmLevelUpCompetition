// 코테 알고리즘 스터디 16회차
// SWEA D3
// 5601. [Professional] 쥬스 나누기

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;

		cout << "#" << t << " ";
		for (int i = 0; i < N; i++) {
			cout << "1/" << N << " ";
		}
		cout << '\n';
	}
}