// 백준 알고리즘 스터디 7회차
// 문제 번호: 11725번
// 문제 이름: 트리의 부모 찾기
// 알고리즘: BFS
// 작성일: 24.03.05

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX 100001 
int N;
int ans[MAX];
bool visit[MAX];
vector<int> graph[MAX];

void bfs();

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    bfs();

    for (int i = 2; i <= N; i++)
        cout << ans[i] << "\n";
}

void bfs() {
    queue<int> q;
    visit[1] = true;
    q.push(1);

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < graph[parent].size(); i++) {
            int child = graph[parent][i];
            if (!visit[child]) {
                ans[child] = parent;
                visit[child] = true;
                q.push(child);
            }
        }
    }
}