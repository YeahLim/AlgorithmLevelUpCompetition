// ���� 14425�� <���ڿ� ����>
// �˰��� : ��
#include <iostream>
#include <map>
using namespace std;

int main(void) {
	// �Էº�
	int N, M;
	cin >> N >> M;

	string input;
	map<string, bool> S;
	for (int i = 0; i < N; i++) {
		cin >> input;
		S.insert(pair<string, bool>(input, true));
	}

	// ��º�
	int cnt = 0;
	for (int i = 0; i < M; i++) {
		cin >> input;
		if (S[input] == true) {
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}