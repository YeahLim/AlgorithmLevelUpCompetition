// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 1541��
// ���� �̸�: �Ҿ���� ��ȣ
// �˰���: �׸��� �˰���
// �ۼ���: ~24.02.14

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// �Է�
	string str;	// ��
	cin >> str;

	int result = 0;	// �����
	bool minus = false;	// ����(-) �Ǻ�
	string num;	// �Ŀ��� ������ ����
	for (int i = 0; i <= str.size(); i++) {
		// ���ڰ� �ƴ�, �����ڰų� ���� �����ٸ�
		if (str[i] == '-' || str[i] == '+' || i == str.size()) {
			if (minus == true) {
				result -= stoi(num);
			}

			if (minus == false) {
				result += stoi(num);
			}

			num = "";
		}
		// ���ڶ��
		else {
			num += str[i];
		}

		// ����(-)��ȣ�� �����ٸ�
		if (str[i] == '-') {	// �������� �ִ� ����) ���� ����� ��Ȱ�ϰ� �ϱ� ���ؼ�
			minus = true;
		}
	}

	// ���) ���� �ּ� �����	
	cout << result;

	return 0;
}