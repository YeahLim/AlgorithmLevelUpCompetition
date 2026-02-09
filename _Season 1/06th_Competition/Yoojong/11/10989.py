#데이터 갯수	메모리사용량
#1,000	약 4KB
#1,000,000	약 4 MB
#10,000,000	약 40MB
import sys
N = int(sys.stdin.readline())
num_list = [0] * 10001

for _ in range(N):
    n = int(sys.stdin.readline())
    num_list[n] +=1

for i in range(10001):
    if num_list[i] != 0:
        for j in range(num_list[i]):
            print(i)

#마지막 출력 부분에 in enumerate 썼는데 index를 
#고려하다보니 메모리를 사용한다는 것을 알게 되었다.


'''
import sys
n = int(sys.stdin.readline())
l = list()
for _ in range(n):
    l.append(int(input()))

l = sorted(l)
for i in l:
    sys.stdout.write(str(i) + '\n')
'''