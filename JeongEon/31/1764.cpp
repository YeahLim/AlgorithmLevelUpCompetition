// ���� 1764�� <�躸��>
// �˰��� : ����, ��
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

	string input;
	map<string, int> list;
	map<string, int> NoHearSea;
	for (int i = 0; i < N; i++) {
		cin >> input;
		list.insert({ input, 0 });
	}

	for (int i = 0; i < M; i++) {
		cin >> input;
		if (list.find(input) != list.end()) {
			NoHearSea.insert({ input, 0 });
		}
		else {
			list.insert({ input, 0 });
		}
	}

	// ��º�
	cout << NoHearSea.size() << '\n';
	for (map<string, int>::iterator itr = NoHearSea.begin(); itr != NoHearSea.end(); itr++) {
		cout << itr->first << '\n';
	}

	return 0;
}