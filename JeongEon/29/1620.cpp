// ���� 1620�� <���¾� ���ϸ� ������ �̴ټ�>
// �˰��� : ��
#include <iostream>
#include <map>
#include <string>
using namespace std;

bool isNum(string str) {
	if (atoi(str.c_str()) != 0) {
		return true;
	}
	else {
		return false;
	}
}

int main(void) {
	// �Էº�
	int N, M;
	cin >> N >> M;

	string input;
	map<string, int> Dogam_name;
	map<int, string> Dogam_num;
	for (int i = 1; i < N + 1; i++) {
		cin >> input;
		Dogam_name.insert({ input, i });
		Dogam_num.insert({ i, input });
	}

	string* str = new string[M];
	for (int i = 0; i < M; i++) {
		cin >> str[i];
	}

	// ��º�
	for (int i = 0; i < M; i++) {
		if (isNum(str[i])) {
			cout << Dogam_num[atoi(str[i].c_str())] << '\n';
		}
		else {
			cout << Dogam_name[str[i]] << '\n';
		}
	}
	return 0;
}