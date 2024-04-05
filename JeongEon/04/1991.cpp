// �ڵ� �׽�Ʈ ���͵� 11ȸ��
// ���̵�: �ǹ� 1
// ������ȣ: 1991��
// �����̸�: Ʈ����ȸ
#include <iostream>

using namespace std;

typedef struct node {
    char left;
    char right;
} NODE;

NODE arr[27];

void pre(char root);
void in(char root);
void post(char root);

int main(void) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char a, b, c;
        cin >> a >> b >> c;
        arr[a].left = b;
        arr[a].right = c;
    }

    pre('A');
    cout << '\n';

    in('A');
    cout << '\n';

    post('A');
    cout << '\n';

    return 0;
}

void pre(char root) {
    if (root == '.') {
        return;
    }

    cout << root;
    pre(arr[root].left);
    pre(arr[root].right);
}
void in(char root) {
    if (root == '.') {
        return;
    }

    in(arr[root].left);
    cout << root;
    in(arr[root].right);
}
void post(char root) {
    if (root == '.') {
        return;
    }

    post(arr[root].left);
    post(arr[root].right);
    cout << root;
}