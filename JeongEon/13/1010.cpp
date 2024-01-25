// 백준 1010번 <다리놓기>
// 알고리즘 : 조합론
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// 입력부
	int T;
	cin >> T;

	int input;
	vector<int> N;
	vector<int> M;
	for (int i = 0; i < T; i++) {
		cin >> input;
		N.push_back(input);

		cin >> input;
		M.push_back(input);
	}

	for (int i = 0; i < T; i++) {
		long long result = 1;

		int r = 1;
		for (int j = M[i]; j > M[i] - N[i]; j--) {
			result = result * j;
			result = result / r;
			r++;
		}

		// 출력부
		cout << result << '\n';
	}
	return 0;
}