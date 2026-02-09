import sys

n = int(sys.stdin.readline())
num_list =list()

for _ in range(n):
    a, b = map(int, sys.stdin.readline().split())
    num_list.append((a,b))

num_list = sorted(num_list, key = lambda x : ( x[0],x[1] ))

for i in num_list:
    print(i[0],i[1])

#dictionary로 한 이유: x값 중복되는게 싫어서
#첨에 dictionary로 했는데 value부분을 list로 하다보니
#출력할 때 for 문을 두 번 써야해서 시간초과 뜸

#dictionary를 없애고 list로 다시 하니 쉽게 풀림