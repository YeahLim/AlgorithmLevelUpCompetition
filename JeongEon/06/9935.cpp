// ���� �˰��� ���͵� 5ȸ��
// ���� ��ȣ: 9935��
// ���� �̸�: ���ڿ� ����
// �˰���: ����
// �ۼ���: ~24.02.22

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // �Է�
    string input;   // ���ڿ�
    cin >> input;

    string bomb;    // ���� ���ڿ�
    cin >> bomb;

    string result;  // ���

    for (int i = 0; i < input.size(); i++) {
        result.push_back(input[i]);
        if (result.back() == bomb.back()) {
            if (result.size() >= bomb.size()) {
                if (result.substr(result.size() - bomb.size(), bomb.size()) == bomb) {
                    result.erase(result.size() - bomb.size(), bomb.size());
                }
            }
        }
    }

    if (result.size() <= 0) {
        cout << "FRULA" << endl;
    }
    else {
        cout << result << endl;
    }

    return 0;
}
