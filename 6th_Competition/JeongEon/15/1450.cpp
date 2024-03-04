// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 1450��
// ���� �̸�: ��������
// �˰���: �̺�Ž��
// �ۼ���: 24.03.01

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
vector <ll>  v;

void dfs(int start, int end, vector <ll>& part, ll sum);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N, C;	// ���� ����, ���� ũ��
	cin >> N >> C;

	ll input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		v.push_back(input);
	}

	// ����
	vector <ll> part1;
	vector <ll> part2;
	dfs(0, N / 2 - 1, part1, 0);
	dfs(N / 2, N - 1, part2, 0);

	sort(part2.begin(), part2.end());

	int cnt = 0;
	for (int i = 0; i < part1.size(); i++) {
		ll x = C - part1[i];
		cnt += upper_bound(part2.begin(), part2.end(), x) - part2.begin();
	}

	// ���) ���濡 �ִ� ����� ��
	cout << cnt;
}

void dfs(int start, int end, vector <ll>& part, ll sum) {
	if (start > end) {
		part.push_back(sum);
		return;
	}
	else {
		dfs(start + 1, end, part, sum);
		dfs(start + 1, end, part, sum + v[start]);
	}
}