// ���� 11478�� <���� �ٸ� �κ� ���ڿ��� ����>
// �˰��� : ��
#include <iostream>
#include <set>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// �Էº�
	string input;
	cin >> input;

	set<string> s;
	for (int i = 0; i < input.size(); i++) {
		string str = "";
		for (int j = i; j < input.size(); j++) {
			str += input[j];
			s.insert(str);
		}
	}

	// ��º�
	cout << s.size() << '\n';

	return 0;
}