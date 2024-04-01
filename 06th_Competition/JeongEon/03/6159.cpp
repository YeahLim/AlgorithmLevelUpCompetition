// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 6159��
// ���� �̸�: Costume Party
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

	int N;	// ���� ������ �ִ� ���� ���� ��
	int S;	// ���� ������ �ִ� �ǻ��� ����
	cin >> N >> S;

	int input;
	vector<int> cow;
	for (int i = 0; i < N; i++) {
		cin >> input;
		cow.push_back(input);
	}

	// ������������ ����
	sort(cow.begin(), cow.end());

	int cow1 = 0;	// 1�� ��
	int cow2 = 1;	// 2�� ��
	int cnt = 0;	// �ǻ� ���� �θ��� ��

	while (cow1 < N && cow2 < N) {
		if (cow[cow1] + cow[cow2] <= S) {
			cnt++;
		}

		if (cow2 < N - 1) {
			cow2++;
		}
		else if (cow1 < N) {
			cow1++;
			cow2 = cow1 + 1;
		}
	}

	cout << cnt;

	return 0;
}