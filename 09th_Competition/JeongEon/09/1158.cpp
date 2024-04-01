// ���� �˰��� ���͵� 9ȸ��
// ���� ��ȣ: 1158��
// ���� �̸�: �似Ǫ�� ����
// �˰���: 
// �ۼ���: 24.03.22

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector<pair<int, bool>> vec;
	for (int i = 1; i <= N; i++) {
		vec.push_back({ i, false });
	}

	int ptr = K - 1;
	int cnt = K;
	queue<int> q;
	while (q.size() < N) {
		if (cnt == K) {
			q.push(vec[ptr].first);
			vec[ptr].second = true;
			cnt = 0;
		}
		else {
			if (ptr + 1 < N) {
				ptr = ptr + 1;
				if (!vec[ptr].second) {
					cnt++;
				}
			}
			else {
				ptr = 0;
				if (!vec[ptr].second) {
					cnt++;
				}
			}
		}
	}

	cout << "<";
	while (q.size() > 1) {
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">";
	q.pop();

	return 0;
}