#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    // 입력
    int N, M;
    cin >> N >> M;

    vector<int> ingredients(N);
    for (int i = 0; i < N; i++) {
        cin >> ingredients[i];
    }

    // 정렬
    sort(ingredients.begin(), ingredients.end());

    // 투포인터로 M인 경우 구하기 
    int left = 0;
    int right = N-1;
    int sum = ingredients[left] + ingredients[right];
    int answer = sum == M ? 1 : 0;
    while (left < right) {
        
        if (sum < M) {
            left++;
        } 
        else if (sum > M) {
            right--;
        }

        if (sum == M) {
            answer++;
            left++;
            right--;
        }
        
        sum = ingredients[left] + ingredients[right];
    }

    // 출력
    cout << answer;
}