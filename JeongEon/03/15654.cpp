// �ڵ� �׽�Ʈ ���͵� 11ȸ��
// ���̵�: �ǹ� 3
// ������ȣ: 15654��
// �����̸�: N�� M(5)

#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

int N, M;
vector<int> vec;
int arr[8];
bool visited[8];

void DFS(int idx);

int main() {
    cin >> N >> M;

    int input;
    for (int i = 0; i < N; i++) {
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    memset(visited, false, sizeof(visited));
    DFS(0);

    return 0;
}

void DFS(int idx) {
    if (idx == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < vec.size(); i++) {
        if (visited[i]) {
            continue;
        }
        visited[i] = true;
        arr[idx] = vec[i];
        DFS(idx + 1);
        visited[i] = false;
    }
}
