import sys
input = sys.stdin.readline

def dfs():
    if len(temp) == M:
        print(' '.join(map(str, temp)))
        return

    # 재귀 함수
    for i in range(1, N+1):
        temp.append(i)          # 그리고 출력 배열에 숫자 추가

        # 다음번째 자리수 재귀함수 호출
        dfs()
        # 해당 자리수의 경우의 수를 모두 따져 본 경우 출력 배열에 다음 값 입력을 위해 pop을 해준다.
        temp.pop()
        #print(temp)

N, M = map(int, input().split())
temp = []                   # 출력되기 위해 숫자가 쌇일 배열


dfs()