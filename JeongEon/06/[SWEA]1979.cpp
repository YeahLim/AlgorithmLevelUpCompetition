// �˰��� �ڵ� ���͵� 14ȸ��
// SWEA D3
// 1979. ��� �ܾ �� �� ������

#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> crossword[15];

int check_garo() {
	int result = 0;
	for (int i = 0; i < N; i++) {
		int cnt_garo = 0;
		for (int j = 0; j < N; j++) {
			if (crossword[i][j] == 0) {
				if (cnt_garo == K) {
					result++;
				}
				cnt_garo = 0;
			}
			else if (crossword[i][j] == 1) {
				cnt_garo++;
			}
		}
		if (cnt_garo == K) {
			result++;
		}
	}

	return result;
}

int check_sero() {
	int result = 0;
	for (int i = 0; i < N; i++) {
		int cnt_sero = 0;
		for (int j = 0; j < N; j++) {
			if (crossword[j][i] == 0) {
				if (cnt_sero == K) {
					result++;
				}
				cnt_sero = 0;
			}
			else if (crossword[j][i] == 1) {
				cnt_sero++;
			}
		}
		if (cnt_sero == K) {
			result++;
		}
	}

	return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		cin >> N >> K;

		for (int i = 0; i < N; i++) {
			crossword[i].clear();
			for (int j = 0; j < N; j++) {
				int input;
				cin >> input;
				crossword[i].push_back(input);
			}
		}

		int result = check_garo() + check_sero();

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}