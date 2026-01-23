N = int(input())  # 노드의 개수

tree = {}       # 트리를 저장할 딕셔너리

# 각 노드와 자식 노드 정보 입력
for i in range(N):
    node, left, right = input().split()
    tree[node] = (left, right)

# 전위 순회 (Preorder Traversal)
def preorder(node):
    if node == '.':              # 자식 노드가 없는 경우
        return
    print(node, end='')          # 루트 출력
    preorder(tree[node][0])      # 왼쪽 자식 순회
    preorder(tree[node][1])      # 오른쪽 자식 순회

# 중위 순회 (Inorder Traversal)
def inorder(node):
    if node == '.':              # 자식 노드가 없는 경우
        return
    inorder(tree[node][0])       # 왼쪽 자식 순회
    print(node, end='')          # 루트 출력
    inorder(tree[node][1])       # 오른쪽 자식 순회

# 후위 순회 (Postorder Traversal)
def postorder(node):
    if node == '.':              # 자식 노드가 없는 경우
        return
    postorder(tree[node][0])     # 왼쪽 자식 순회
    postorder(tree[node][1])     # 오른쪽 자식 순회
    print(node, end='')          # 루트 출력

# 전위 순회 결과 출력
preorder('A')
print()

# 중위 순회 결과 출력
inorder('A')
print()

# 후위 순회 결과 출력
postorder('A')
print()
