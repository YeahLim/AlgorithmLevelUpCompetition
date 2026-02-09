import sys

n = int(sys.stdin.readline())
x_list = list(map(int, sys.stdin.readline().split()))

x_sorted = sorted(list(set(x_list)))

dic = {x_sorted[i] : i for i in range(len(x_sorted))}

for i in x_list:
    print(dic[i], end=' ')

#index = O(N) 인데 for문 돌리니 시간초과.. ㅋ
#for i in x_list:
#    sys.stdout.write(str(x_sorted.index(i))+' ' )


#입력  2   4 -10 4 -9
#sort -10, -9, 2, 4


#set  2   4  -10 -9
#s_set -9 -10  2  4 

# 답    2   3  0  3  1

