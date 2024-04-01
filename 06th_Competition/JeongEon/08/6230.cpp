// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 6230��
// ���� �̸�: Buy One Get One Free
// �˰���: ��������
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
	int N;	// ���� ǰ���� ���� ���� ����
	int M;	// ����� ǰ���� ���� ���� ����
	cin >> N >> M;

	int input;
	vector<int> high;
	for (int i = 0; i < N; i++) {
		cin >> input;
		high.push_back(input);
	}
	sort(high.begin(), high.end());

	vector<int> low;
	for (int i = 0; i < M; i++) {
		cin >> input;
		low.push_back(input);
	}
	sort(low.begin(), low.end());

	// ����
	int ptr1 = N - 1;
	int ptr2 = M - 1;
	int cnt = high.size();
	while (ptr1 >= 0 && ptr2 >= 0) {
		if (high[ptr1] > low[ptr2]) {
			cnt++;
			ptr1--;
			ptr2--;
		}
		else {
			ptr2--;
		}
	}

	// ���) ��� John�� ���� �� �ִ� ���� ������ �ִ� �� ����
	cout << cnt;

	return 0;
}