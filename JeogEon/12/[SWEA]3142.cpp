// 코테 알고리즘 스터디 16회차
// SWEA D3
// 3142. 영준이와 신비한 뿔의 숲

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int N, M;
		cin >> N >> M;

		int uni = 0;
		int twin = 0;
		for (int i = M; i >= 1; i--) {
			int tmp = N;
			if (2 * i <= tmp) {
				twin = i;
				tmp -= 2 * i;
				uni = tmp;
				if (twin + uni == M) {
					break;
				}
				twin = 0;
				uni = 0;
			}
		}

		if (uni == 0 && twin == 0) {
			uni = M;
		}

		cout << "#" << t << " ";
		cout << uni << " " << twin << '\n';
	}
}