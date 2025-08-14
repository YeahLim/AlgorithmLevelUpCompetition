#include <iostream>
using namespace std;

int main() {
    long double a, b; 
    cin >> a >> b;

    cout.precision(15); 
    cout << fixed;
    cout << a / b << endl;

    return 0;
}