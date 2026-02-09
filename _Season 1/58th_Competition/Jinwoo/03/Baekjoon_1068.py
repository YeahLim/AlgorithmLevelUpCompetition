import sys
input = sys.stdin.readline

def dfs(num, arr):

    # 제거할 노드 값에 -2 삽입 = 인덱스의 배열값 삭제
    arr[num] = -2

    # 재귀 실행
    for i in range(len(arr)):
        if num == arr[i]:
            dfs(i, arr)

N = int(input())                                # 트리의 노드의 개수 N
tree_list = list(map(int, input().split()))     # 각 노드의 부모 정보
delete_node = int(input())                      # 지울 노드의 번호

dfs(delete_node, tree_list)
cnt = 0
for i in range(len(tree_list)):
    if tree_list[i] != -2 and i not in tree_list:
        cnt += 1

print(cnt)

