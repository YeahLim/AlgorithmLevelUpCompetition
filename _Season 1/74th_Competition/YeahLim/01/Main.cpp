#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int num;
    cin >> num;

    int answer = 1;
    int curr = 1;

    while (curr < num) {
        curr += 6 * answer;
        answer++;
    }

    cout << answer;

    return 0;
}