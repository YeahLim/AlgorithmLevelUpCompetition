#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int N;
	cin >> N;

	stack<pair<long long int, long long int>> top;
	top.push({ 100000001, 0 });
	for (long long int i = 1; i <= N; i++) {
		long long int input;
		cin >> input;
		while (top.top().first <= input) {
			top.pop();
		}

		cout << top.top().second << " ";
		top.push({ input, i });
	}

	return 0;
}
