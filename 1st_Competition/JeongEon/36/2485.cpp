// 백준 2485번 <가로수>
// 알고리즘 : 유클리드 호제법
#include <iostream>
#include <vector>
using namespace std;


int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 입력부
	int N;
	cin >> N;
	vector <int> v, d;

	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		v.push_back(input);
		if (i > 0) {
			d.push_back({ input - v[i - 1] });
		}
	}

	int gcd = d[0];
	for (int i = 0; i < d.size(); i++) {
		gcd = GCD(gcd, d[i]);
	}

	int dis = v[N - 1] - v[0];
	int result = dis / gcd;
	result -= N - 1;

	// 출력부
	cout << result << '\n';

	return 0;
}