# [백준 - 실버 1] 트리 순회 (1991 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 트리
- 재귀

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 이진 트리 순회 방법중 세가지인 전위순회, 중위순회 후위순회를 구현하고 해당 결과를 출력하는 문제이다.

그렇다면 순회 방식에 대해 먼저 알아보자.

### 전위 순회 (Preorder Traversal)
- 순서: (루트) -> (왼쪽 자식) -> (오른쪽 자식)
- 트리의 루트를 먼저 방문한 후, 왼쪽 서브트리를 방문하고, 마지막으로 오른쪽 서브트리를 방문하는 방식.

### 중위 순회(Inorder Traversal)
- 순서: (왼쪽 자식) -> (루트) -> (오른쪽 자식)
- 왼쪽 서브트리를 먼저 방문하고, 루트를 방문한 후, 마지막으로 오른쪽 서브트리를 방문하는 방식.

### 후위 순회(Postorder Traversal)
- 순서: (왼쪽 자식) -> (오른쪽 자식) -> (루트)
- 왼쪽 서브트리를 먼저 방문하고, 오른쪽 서브트리를 방문한 후, 마지막으로 루트를 방문하는 방식.

### 풀이 방법
- 각 노드와 그에 해당하는 왼쪽자식과 오른쪽 자식 정보를 입력 받은 후
- 그 노드 저보들을 딕셔너리로 저장하여 노드 이름을 키값으로, 노드의 자식 노드를 값(value)로 저장하였다.
- 그 후 각 조건에 맞는 순회 함수를 작성한 후 각각의 순회 결과를 출력하는 방법으로 풀이를 진행하였다.

## :black_nib: **Review**

- 이진 트리의 순회는 재귀적 구조를 사용하여 구현할 수 있다는 점을 깨닳았다.
- 트리 순회 방식을 이해해볼수 있었다.