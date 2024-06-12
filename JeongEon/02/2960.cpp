// �˰��� ���͵� 21ȸ��
// ���� �ǹ� 4
// 2960 �����佺�׳׽��� ü

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	vector<int> vec;
	bool num[1001];
	for (int i = 1; i <= N; i++) {
		num[i] = true;
	}

	for (int i = 2; i <= N; i++) {
		if (num[i]) {
			for (int j = i; j <= N; j += i) {
				if (num[j]) {
					num[j] = false;
					vec.push_back(j);
				}
			}
		}
	}

	cout << vec[K - 1] << '\n';

	return 0;
}