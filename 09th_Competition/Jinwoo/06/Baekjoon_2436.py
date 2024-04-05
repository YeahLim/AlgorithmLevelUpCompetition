import sys
from collections import deque

N = int(input())                                                                                        # 풍선 갯수 N

balloon_point = deque(map(int, sys.stdin.readline().split()))                                           # 풍선 안의 번호 정보 입력받기
# 시간복잡도 O(N)

count = deque()                                                                                         # balloon_point의 인덱스를 담을 변수 count 선언

for i in range(1, N+1):                                                                                 # 인덱스 값을 담을 리스트 만들기
    count.append(i)
# 시간복잡도 O(N)

#print(count)

while balloon_point:                                                                                    # 풍선이 다 터지기 전까지 반복

    X = balloon_point.popleft()                                                                         # balloon_point 리스트 안의 첫번째 값을 빼내어 X에 담는다.
    #print("빠진 풍선값", X)
    #print("빠진 풍선 번호", count.popleft())
    print(count.popleft(), end=" ")                                                                     # 터트린 풍선 위치의 count 리스트의 인덱스 값도 똑같이 없애준다, 빠진 풍선값도 출력해준다. 이렇게 되면 반복이 돌때 마다 터진 풍선값을 확인할 수 있다.

    if balloon_point:                                                                                   # 풍선이 남아 있을때 (마지막 값을 위에서 터트리면 계산할 값이 없으므로 이 조건문을 넣어주었다)

        if X > 0:                                                                                       # 터트린 풍선 안의 값이 양수일 경우
            for i in range(X-1):                                                                        # X -1 만큼 (위에서 X값을 가져올때 popleft()로 값을 이미 빼주어 배열이 왼쪽으로 하나씩 밀렸다. 이것은 모든 값들이 왼쪽으로 하나씩 밀린것과 같으므로 반복을 하나 빼줘야 한다.)
                balloon_point.append(balloon_point.popleft())                                           # 리스트 제일 왼쪽에 있는(제일 앞에 있는) 풍선을 뺀 후 배열의 제일 뒷쪽으로 옮겨준다.
                count.append(count.popleft())                                                           # 풍선의 순서 값도 동일하게 적용한다.

        elif X < 0:                                                                                     # 풍선값이 음수일 경우이다.
            for i in range(X*-1):                                                                       # X에 -1을 곱해주어 양수로 만들어 주어 X 만큼 반복문을 반복시킨다.
                balloon_point.appendleft(balloon_point.pop())                                           # 풍선값 리스트의 제일 오른쪽(제일 마지막 풍선값)을 빼주어 제일 앞쪽으로 추가 시킨다.
                count.appendleft(count.pop())                                                           # 풍선의 순서 값도 동일하게 적용한다.
# while문 전체 시간 복잡도 O(N)

#    print(balloon_point)
#    print(count)
#    print("------------------")
    
