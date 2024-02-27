// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 11728��
// ���� �̸�: �迭 ��ġ��
// �˰���: �� ������
// �ۼ���: 24.02.27

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;	// A�� �迭 ũ��
	int M;	// B�� �迭 ũ��
	cin >> N >> M;

	int input;
	vector<int> A;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back(input);
	}
	sort(A.begin(), A.end());

	vector<int> B;
	for (int i = 0; i < M; i++) {
		cin >> input;
		B.push_back(input);
	}
	sort(B.begin(), B.end());

	int a = 0;	// �迭 A�� ������
	int b = 0;	// �迭 B�� ������
	vector<int> result;
	while (result.size() < N + M) {
		if (a < N && b < M) {
			if (A[a] <= B[b]) {
				result.push_back(A[a]);
				a++;
			}
			else if (B[b] < A[a]) {
				result.push_back(B[b]);
				b++;
			}
		}
		else {
			while (a < N) {
				result.push_back(A[a]);
				a++;
			}

			while (b < M) {
				result.push_back(B[b]);
				b++;
			}
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}

	return 0;
}