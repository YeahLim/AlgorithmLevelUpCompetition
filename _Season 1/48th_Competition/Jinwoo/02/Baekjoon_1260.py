import sys
input = sys.stdin.readline

N,M,V = map(int,input().split())

# 행렬 만들기
graph = [[0]*(N+1) for _ in range(N+1)]
# print(graph)

# 정점간의 연결 행렬에 표시
for i in range (M):
    a,b = map(int,input().split())
    graph[a][b] = graph[b][a] = 1
# print(graph)

#방문 리스트 행렬
visited1 = [0]*(N+1)
visited2 = visited1.copy()
# print(visited1)
# print(visited2)

#dfs 함수 만들기 (탐색을 시작하는 번호 V부터 탐색을 시작)
def dfs(V):
    visited1[V] = 1 # 방문처리
    print(V, end=' ')   # 1번 노드는 방문처리를 하였으므로 출력 => 1번 노드는 스택에 들어간 적이 있다.

    # 현재 노드와 연결되어 있는 노드 찾기
    for i in range(1, N+1):

        # 현재 노드와 연결이 되어 있고, 방문한 적이 없다면 재귀함수 호출 => 너비 탐색 전 깊이를 탐색한다.
        if graph[V][i] == 1 and visited1[i] == 0:
            dfs(i)

#bfs 함수 만들기
def bfs(V):

    # queue에 탐색할 노드 V를 삽입
    queue = [V]
    visited2[V] = 1 # 방문처리

    # 반복문을 통해 queue에 노드 정보가 없을때까지(탐색이 끝날때 까지) 반복해주자.
    while queue:

        # 방문 노드 제거 후 출력
        V = queue.pop(0)    # queue의 0번쨰 요소를 돌려준 후 삭제 (선입 선출)
        print(V, end = ' ')

        # 현재 간선(노드)와 연결되어 있고, 방문처리가 되지 않은 간선(노드) 찾기
        for i in range(1, N+1):
            if(visited2[i] == 0 and graph[V][i] == 1):
                queue.append(i) # 해당 조건이 있으면 queue에 넣은 후
                visited2[i] = 1 # 방문처리

dfs(V)
print()
bfs(V)