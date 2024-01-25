// ���� 2164�� <ī��2>
// �˰��� : ť
#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// �Էº�
	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() != 1) {
		q.pop();
		if (q.size() == 1) {
			break;
		}
		q.push(q.front());
		q.pop();
	}

	// ��º�
	cout << q.front();

	return 0;
}