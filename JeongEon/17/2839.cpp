// ���� 2839�� <���� ���>
// �˰��� : ���Ʈ���� �˰���
#include <iostream>

using namespace std;

int main(void) {
	int sugar;
	cin >> sugar;

	int cnt = 0;

	while (1) {
		if (sugar <= 0) {
			if (sugar < 0) {
				cnt = -1;
			}
			break;
		}
		else {
			if ((sugar % 5) == 0) {
				cnt += sugar / 5;
				sugar = 0;
			}
			else {
				sugar -= 3;
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}