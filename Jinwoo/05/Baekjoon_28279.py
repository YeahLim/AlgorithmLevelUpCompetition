
'''
1 X: 정수 X를 덱의 앞에 넣는다. (1 ≤ X ≤ 100,000)
2 X: 정수 X를 덱의 뒤에 넣는다. (1 ≤ X ≤ 100,000)
3: 덱에 정수가 있다면 맨 앞의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
4: 덱에 정수가 있다면 맨 뒤의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
5: 덱에 들어있는 정수의 개수를 출력한다.
6: 덱이 비어있으면 1, 아니면 0을 출력한다.
7: 덱에 정수가 있다면 맨 앞의 정수를 출력한다. 없다면 -1을 대신 출력한다.
8: 덱에 정수가 있다면 맨 뒤의 정수를 출력한다. 없다면 -1을 대신 출력한다.
'''


from collections import deque
import sys

N = int(input())

N_line = deque()

for i in range(N):

    Ncode = list(map(int, sys.stdin.readline().split()))

    if Ncode[0] == 1:
        N_line.appendleft(Ncode[1])

    elif Ncode[0] == 2:
        N_line.append(Ncode[1])

    elif Ncode[0] == 3:
        if N_line:
            print(N_line.popleft())
        else:
            print(-1)

    elif Ncode[0] == 4:
        if N_line:
            print(N_line.pop())
        else:
            print(-1)

    elif Ncode[0] == 5:
        print(len(N_line))

    elif Ncode[0] == 6:
        if N_line:
            print(0)
        else:
            print(1)

    elif Ncode[0] == 7:
        if N_line:
            print(N_line[0])
        else:
            print(-1)

    elif Ncode[0] == 8:
        if N_line:
            print(N_line[-1])
        else:
            print(-1)

