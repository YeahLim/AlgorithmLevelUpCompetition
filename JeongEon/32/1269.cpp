// ���� 1269�� <��Ī ������>
// �˰��� : ��
#include <iostream>
#include <map>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// �Էº�
	int N, M;
	cin >> N >> M;

	int input; int cnt = 0;
	map<int, int> A;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.insert({ input, 0 });
	}

	map<int, int> B;
	for (int i = 0; i < M; i++) {
		cin >> input;
		B.insert({ input, 0 });
	}

	for (map<int, int>::iterator itr = A.begin(); itr != A.end(); itr++) {
		if (B.find(itr->first) == B.end()) {
			cnt++;
		}
	}

	for (map<int, int>::iterator itr = B.begin(); itr != B.end(); itr++) {
		if (A.find(itr->first) == A.end()) {
			cnt++;
		}
	}

	// ��º�
	cout << cnt << '\n';

	return 0;
}