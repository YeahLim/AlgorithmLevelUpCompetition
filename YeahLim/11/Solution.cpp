#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    
    // 1. 우선순위 큐에 스코빌 지수를 넣는다
    priority_queue<int, vector<int>, greater<int>> scv_pq(scoville.begin(), scoville.end());
    
    // 2. 가장 작은 스코빌 지수가 K 이상일 때까지 섞는다
    int answer = 0;
    while (!scv_pq.empty() && scv_pq.top() < K) {

        if (scv_pq.size () == 1) {
            return -1;
        }

        int first = scv_pq.top();
        scv_pq.pop();
        int second = scv_pq.top();
        scv_pq.pop();
        
        scv_pq.push(first+second*2);
        
        answer++;
    }
    
    return answer;
}