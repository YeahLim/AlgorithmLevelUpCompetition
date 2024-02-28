import sys


n = sys.stdin.readline().rstrip()

num_list = [0]*10
for i in n:
    i_int = int(i)
    num_list[i_int] +=1

for index, val in reversed(list(enumerate(num_list))):
    if val !=0:
        sys.stdout.write(str(index) * val )



