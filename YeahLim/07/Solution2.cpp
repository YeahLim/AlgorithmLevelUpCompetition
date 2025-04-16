#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool checkPrimary(int num) {
    
    if (num <= 1) {
        return false;
    }
    
    if (num == 2) {
        return true;
    }
    
    if (num % 2 == 0) {
        return false;
    }
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int solution(string numbers) {
    
    unordered_set<int> set;
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    do {
        for (int i = 1; i <= numbers.size(); i++) {
            int num = stoi(numbers.substr(0, i));
            if (!set.count(num) && checkPrimary(num)) {
                set.insert(num);
                answer++;
            }
        }
    }
    while (next_permutation(numbers.begin(), numbers.end()));
    
    return answer;
}