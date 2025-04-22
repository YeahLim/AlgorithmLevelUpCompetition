#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    
    // 인접 리스트 만들기
    vector<vector<int>> graph(n+1);
    for (auto& e : edge) {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }
    
    // bfs로 최단 경로 구하기
    queue<int> q; // 노드 번호
    q.push(1);
    vector<int> distance(n+1); // 거리 
    distance[1] = 1;
    int max_dist = 0; // 최대 거리
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (auto& next : graph[curr]) {
            
            // 거리가 0인 경우 (즉, 아직 방문하지 않은 경우)
            if (distance[next] == 0) {
                distance[next] = distance[curr] + 1;
                q.push(next);
                max_dist = max(max_dist, distance[curr] + 1);
            }
        }
    }
    
    // 가장 먼 노드의 개수 구하기
    int answer = 0;
    for (int& dist : distance) {
        if (max_dist == dist) {
            answer++;
        }
    }
        
    return answer;
}