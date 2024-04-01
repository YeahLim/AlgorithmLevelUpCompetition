// ���� 10815�� <���� ī��>
// �˰��� : ����
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	// �Էº�
	int N;
	cin >> N;

	int input;
	vector<int> SangGeun;
	for (int i = 0; i < N; i++) {
		cin >> input;
		SangGeun.push_back(input);
	}

	stable_sort(SangGeun.begin(), SangGeun.end());

	int M;
	cin >> M;

	vector<int> compare;
	for (int i = 0; i < M; i++) {
		cin >> input;
		compare.push_back(input);
	}

	// ��º�
	for (int i = 0; i < M; i++) {
		if (binary_search(SangGeun.begin(), SangGeun.end(), compare[i])) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}
	cout << '\n';

	return 0;
}