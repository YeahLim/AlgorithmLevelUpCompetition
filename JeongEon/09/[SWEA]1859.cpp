// �� 12ȸ �˰��� ���͵�
// SWEA D2
// ������: �鸸 ���� ������Ʈ
// ������ȣ: 1859��

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		long long int input;
		vector<long long int> vec;
		for (int j = 0; j < N; j++) {
			cin >> input;
			vec.push_back(input);
		}

		long long int sum = 0;
		int max = N - 1;
		for (int j = N - 1; j >= 0; j--) {
			if (vec[j] <= vec[max]) {
				sum += vec[max] - vec[j];
			}
			else {
				max = j;
			}
		}

		cout << "#" << i + 1 << " " << sum << '\n';
	}

	return 0;
}