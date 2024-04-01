// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 9728��
// ���� �̸�: Pair Sum
// �˰���: ��������
// �ۼ���: 24.02.28

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int T;	// �׽�Ʈ ���̽� ����
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N, M;	// �迭 ũ��, ��
		cin >> N >> M;

		long long int input;
		vector<long long int> arr;
		for (int j = 0; j < N; j++) {
			cin >> input;
			arr.push_back(input);
		}

		int start = 0;
		int end = N - 1;
		int cnt = 0;
		while (start < end && end < N) {
			int sum = arr[start] + arr[end];
			if (sum == M) {
				cnt++;
				start++;
				end--;
			}
			else if (sum < M) {
				start++;
			}
			else if (sum > M) {
				end--;
			}
		}

		cout << "Case #" << i + 1 << ": " << cnt << '\n';
	}

	return 0;
}