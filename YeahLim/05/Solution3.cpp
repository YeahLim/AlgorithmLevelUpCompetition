#include <string>
#include <vector>
#include <queue>
using namespace std;

class Process {
public:
    int loc;
    int pri;
    Process(int loc, int pri) : loc(loc), pri(pri) {}
};

int solution(vector<int> priorities, int location) {
    
    queue<Process> q;
    priority_queue<int> pq; // 우선순위 큐
    
    for (int i = 0; i < priorities.size(); i++) {
        q.push(Process(i, priorities[i]));
        pq.push(priorities[i]);
    }
    
    // 대기 프로세스 탐색
    int count = 0;
    
    while (!q.empty()) {

        Process curr = q.front();
        
        // 우선순위가 높은 프로세스인 경우
        if (pq.top() == curr.pri) {
            count++;
            pq.pop();
            if (location == curr.loc) {
                return count;
            }
        }
        else {
            q.push(curr);
        }
        q.pop();
    }
    
    return count;
}