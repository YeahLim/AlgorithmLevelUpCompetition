// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 14465��
// ���� �̸�: �Ұ� ���� �ǳʰ� ���� 5
// �˰���: �����̵� ������
// �ۼ���: 24.03.01

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N;	// ��ȣ�� ����
	int K;	// �ѳ��� ���� ��ȣ�� ����
	int B;	// ���峭 ��ȣ�� ����
	cin >> N >> K >> B;

	int num;
	vector<int> Light(N + 1);
	Light.push_back(0);
	for (int i = 0; i < B; i++) {
		cin >> num;
		Light[num] = -1;
	}

	// ������
	for (int i = 1; i <= N; i++) {
		Light[i] += Light[i - 1] + 1;
	}

	// ����
	int less = B;
	int ptr = K;
	while (ptr <= N) {
		int sum = Light[ptr] - Light[ptr - K];
		if (K - sum < less) {
			less = K - sum;
		}

		ptr++;
	}

	// ���) �ּ� �� ���� ��ȣ���� �����ؾ� �ϴ���
	cout << less;

	return 0;
}