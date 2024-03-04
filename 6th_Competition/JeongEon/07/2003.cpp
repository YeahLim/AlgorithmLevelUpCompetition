// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 2003��
// ���� �̸�: ������ �� 2
// �˰���: �� ������
// �ۼ���: 24.02.28

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N;	// ������ ũ��
	int M;	// �� ����
	cin >> N >> M;

	int input;
	vector<int> arr;
	arr.push_back(0);
	for (int i = 1; i <= N; i++) {
		cin >> input;
		arr.push_back(input + arr[i - 1]);
	}

	// ����
	int cnt = 0;
	int ptr1 = 0;
	int ptr2 = 0;
	while (ptr2 <= N && ptr1 <= N) {
		int sum = arr[ptr2] - arr[ptr1];

		if (sum < M) {
			ptr2++;
		}
		else if (sum >= M) {
			if (sum == M) {
				cnt++;
			}
			ptr1++;
		}
	}


	// ���) ����� ��
	cout << cnt;

	return 0;
}