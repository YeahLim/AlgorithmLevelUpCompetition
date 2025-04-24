#include <string>
#include <vector>

using namespace std;

int solution(string word) {
    
    vector<int> weights = {781, 156, 31, 6, 1}; // 가중치
    
    int answer = word.size();
    
    // 각 자리를 순회하며
    for (int i = 0; i < word.size(); i++) {
        
        int num;
        
        if (word[i] == 'A') {
            num = 0;
        }
        else if (word[i] == 'E') {
            num = 1;
        }
        else if (word[i] == 'I') {
            num = 2;
        }
        else if (word[i] == 'O') {
            num = 3;
        }
        else if (word[i] == 'U') {
            num = 4;
        }
        
        answer += weights[i] * num; // 가중치 계산
    }
    
    return answer;
}