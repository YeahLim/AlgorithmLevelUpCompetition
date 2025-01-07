import sys
input = sys.stdin.readline

computers = int(input())     # 컴퓨터 수 (노드)
edge = int(input())      # 연결된 컴퓨터 쌍의 수 (간선)
cnt_computers = -1      # 감염된 컴퓨터 수, 1번 컴퓨터 방문 했을때 count를 제외

# 행렬 만들기
graph = [[0]*(computers+1) for _ in range(computers+1)]
#print(graph)

#방문 리스트 행렬
visited1 = [0]*(computers+1)

# 정점간의 연결 행렬에 표시
for i in range (edge):
    a,b = map(int,input().split())
    graph[a][b] = graph[b][a] = 1
#print(graph)

def dfs(V):
    visited1[V] = 1
    global cnt_computers    # 전역변수 설정
    cnt_computers += 1      # 깊이 탐색 = 감염시킨 컴퓨터 수 증가

    for i in range(1, computers+1):
        if graph[V][i] == 1 and visited1[i] == 0:
            dfs(i)

dfs(1)
print(cnt_computers)