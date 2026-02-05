#include <iostream>
#include <algorithm>

#define MAX 1000001

using namespace std;

int arr[MAX];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

	int n;
    cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	for (int i = n - 3; i >= 0; --i) {
		if (arr[i + 2] < arr[i + 1] + arr[i]) {
			cout << arr[i + 2] + arr[i] + arr[i + 1] << endl;
			break;
		}
		else if (i == 0) {
			cout << -1 << endl;
		}
	}
	return 0;
}
