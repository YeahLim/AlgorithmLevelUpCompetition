// ���� 7785�� <ȸ�翡 �ִ� ���>
// �˰��� : ��
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(void) {
	// �Էº�
	int n;
	cin >> n;

	pair<string, string> input;
	map<string, string, greater<>> Giggle;
	for (int i = 0; i < n; i++) {
		cin >> input.first >> input.second;
		Giggle[input.first] = input.second;
	}

	// ��º�
	for (map<string, string>::iterator itr = Giggle.begin(); itr != Giggle.end(); itr++) {
		if (itr->second == "enter") {
			cout << itr->first << '\n';
		}
	}

	return 0;
}