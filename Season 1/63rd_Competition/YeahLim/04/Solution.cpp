#include <string>
#include <vector>

using namespace std;

vector<int> numbers;
int target;
int answer;

void calculateNumbers(int depth, int current) {
    
    if (depth == numbers.size()) {
        
        // 계산 결과가 타겟이랑 같은 경우
        if (current == target) {
            answer++;
        }
        
        return;
    }
    
    calculateNumbers(depth + 1, current + numbers[depth]);
    calculateNumbers(depth + 1, current - numbers[depth]);
}




int solution(vector<int> numbers, int target) {
    
    ::numbers = numbers;
    ::target = target;
    
    calculateNumbers(0, 0);
    
    return answer;
}