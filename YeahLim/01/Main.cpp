#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int a, b;
        cin >> a >> b;

        int res = 1;
        for (int i = 0; i < b; i++) {
            res = (res * a) % 10;
        }
        
        if (res  == 0) {
            cout << 10 << endl;
        } else {
            cout << res << endl;
        }
    }
}