// �� 12ȸ �˰��� ���͵�
// SWEA D3
// ������: [S/W �����ذ� ����] 2���� - �ִ� ���
// ������ȣ: 1244��

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string num;
int result, max_cnt;

void dfs(int ptr, int cnt) {
    // Ż�� ����
    if (cnt == max_cnt) {
        result = max(result, stoi(num));
        return;
    }
    for (int i = ptr; i < num.length() - 1; i++) {
        for (int j = i + 1; j < num.length(); j++) {
            if (num[i] <= num[j]) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }
            // ������ �ٲپ���ϴ� ���
            if (i == num.length() - 2 && j == num.length() - 1) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        cin >> num >> max_cnt;
        result = 0;
        dfs(0, 0);
        cout << "#" << t << " " << result << '\n';
    }

    return 0;
}