// �˰��� ���͵� 21ȸ��
// ���� �ǹ� 4
// 25192 �λ缺 ���� ������

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	int N;
	cin >> N;

	int cnt = 0;
	set<string> member;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;

		if (input != "ENTER") {
			member.insert(input);
		}
		else {
			cnt += member.size();
			member.clear();
		}
	}

	cnt += member.size();
	cout << cnt;

	return 0;
}