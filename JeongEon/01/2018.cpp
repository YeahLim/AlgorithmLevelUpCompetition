// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 2018��
// ���� �̸�: ������ �� 5
// �˰���: �� ������
// �ۼ���: 24.02.27

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int start = 1;
	int end = 1;
	int cnt = 0;
	int sum = 0;

	while (start <= end && end <= N) {
		if (sum < N) {
			sum += end;
			end++;
		}
		else {
			if (sum == N) {
				cnt++;
			}
			sum -= start;
			start++;
		}
	}

	cout << cnt + 1;

	return 0;
}