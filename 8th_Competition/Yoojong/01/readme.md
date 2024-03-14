# [백준] 스택 (10828)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

구현 자료구조 스택

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
'''
for _ in range(n):
    command = sys.stdin.readline().rstrip()
    if command == 'pop':
        pop()
    elif command == 'size':
        size()
    elif command =='empty':
        empty()
    elif command =='top':
        top()
'''
## :black_nib: **Review**
- 처음에 class로 풀었는데 안되서 개빡쳐서 그냥 def 로 풀었다.
