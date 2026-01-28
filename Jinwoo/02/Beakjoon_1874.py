import sys
input = sys.stdin.readline

n = int(input())
target = [int(input()) for _ in range(n)]

stack = []
result = []
current = 1  # 다음에 push할 숫자

for num in target:
    # 필요한 숫자까지 push
    while current <= num:
        stack.append(current)
        result.append('+')
        current += 1

    # top이 원하는 숫자가 아니면 불가능
    if stack[-1] != num:
        print("NO")
        sys.exit(0)

    # pop
    stack.pop()
    result.append('-')

# 결과 출력
print('\n'.join(result))
