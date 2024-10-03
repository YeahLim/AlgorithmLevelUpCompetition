#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	int coin5 = n/5;
	int money = (n - (5 * coin5)) % 2;
	while (money != 0) {
		if (coin5 <= 0) {
			cout << -1;
			return 0;
		}
		coin5 -= 1;
		money = (n - (5 * coin5)) % 2;
	}

	cout << coin5 + (n - (5 * coin5)) / 2 << '\n';

	return 0;
}
