#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Process {
public:
    int loc;
    int pri;
    Process(int loc, int pri) : loc(loc), pri(pri) {}
};

int solution(vector<int> priorities, int location) {
    
    // 1. 우선 순위가 높은 순서대로 정렬
    vector<int> sorted_pri (priorities.begin(), priorities.end());
    sort(sorted_pri.begin(), sorted_pri.end(), greater<>());
    
    // 2. 대기 프로세스 탐색
    int index = 0; // 현재 우선 순위가 가장 높은 인덱스
    int count = 0; // 프로세스 실행 횟수
    queue<Process> queue;
    for (int i = 0; i < priorities.size(); i++) {
        // 우선순위가 높은 프로세스인 경우
        if (sorted_pri[index] == priorities[i]) {
            index++;
            count++;
            if (location == i) {
                return count;
            }
        }
        else {
            queue.push(Process(i, priorities[i]));
        }
    }
    
    while (!queue.empty()) {

        Process curr = queue.front();
        
        // 우선순위가 높은 프로세스인 경우
        if (sorted_pri[index] == curr.pri) {
            count++;
            index++;
            if (location == curr.loc) {
                return count;
            }
        }
        else {
            queue.push(curr);
        }
        queue.pop();
    }
    
    return count;
}