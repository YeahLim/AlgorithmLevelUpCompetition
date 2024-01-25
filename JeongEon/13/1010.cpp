// ���� 1010�� <�ٸ�����>
// �˰��� : ���շ�
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// �Էº�
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

		// ��º�
		cout << result << '\n';
	}
	return 0;
}